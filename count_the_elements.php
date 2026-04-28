<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>My first calculator!!</title>
</head>
<body>
<?php
    function summary($arr) {
        $summa = 0;
        foreach($arr as $value) {
            $summa += $value;
        }

        return $summa;
    }

    $list = [5, 7, 3];
    echo summary($list).'<br>';
    echo summary([5, 2, 3]).'<br>';
?>
</body>
</html>
