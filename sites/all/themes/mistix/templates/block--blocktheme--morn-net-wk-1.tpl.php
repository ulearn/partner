<div id="block-<?php print $block->module . '-' . $block->delta; ?>" class="<?php print $classes; ?> " <?php print $attributes; ?>>
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
  <h2><?php print $block->subject ?></h2>
<?php endif;?>


<?php
	//load the charts_highcharts library for well... highcharts
	drupal_add_library('charts_highcharts', 'highcharts');

	//set count for validation and grab the results of the first view
	$view_result_a_count = 0;
	$view_result_a = views_get_view_result("net_morn_1_week");

	//set count for validation and grab the results of the second view
	$view_result_b_count = 0;
	$view_result_b = views_get_view_result("departures_morn_this_wk");

	//count the results of A
	foreach($view_result_a as $itema){
		$view_result_a_count++;
	}

	//count the results of B
	foreach($view_result_b as $itemb){
		$view_result_b_count++;
	}

	//display the output.
	//echo "Result: ". ($view_result_a_count - $view_result_b_count);
	$total = ($view_result_a_count - $view_result_b_count);
?>

<div id="thechart"></div>
<script>

jQuery(function () {
        jQuery('#thechart').highcharts({
            chart: {
                type: 'bar'
            },
            title: {
                text: 'Stacked bar chart'
            },
            xAxis: {
                categories: ['morn']
            },
            yAxis: {
                min: 0,
				
                title: {
                    text: 'Total'
                }
            },
            legend: {
                backgroundColor: '#FFFFFF',
                reversed: true
            },
            plotOptions: {
                series: {
                    stacking: 'normal'
                }
            },
            series: [{
                name: 'Net',
                data: [<?php echo $total; ?>]
            }, {
                name: 'Dep',
                data: [<?php echo $view_result_b_count; ?>]
            }, {
				name: 'Arr',
                data: [<?php echo $view_result_a_count; ?>]
            }]
        });
    });
</script>

<!--<div class="content"<?php print $content_attributes; ?>>
<?php print $content ?>-->
</div>
</div>

