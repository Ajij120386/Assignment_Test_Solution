<?php

$con=mysqli_connect('localhost','root');

if($con)
    
       echo "Connection successful";
else 
       echo "Connection notsuccessful";

       
       mysqli_select_db($con,'stores_car_data_by_ajij');
       
      $carType = $_POST['carType'];
      $name = $_POST['name'];
      $model = $_POST['model'];
      $year = $_POST['year'];
      $batteryCapacity = $_POST['batteryCapacity'];
      $fuelEfficiency = $_POST['fuelEfficiency'];

$sql = "INSERT INTO car_inventory (carType, name, model, year, batteryCapacity, fuelEfficiency)
        VALUES ('$carType', '$name', '$model', $year, $batteryCapacity, $fuelEfficiency)";
        
        echo "$query";
        mysqli_query($con,$query);
        header('location:index.html')
?>

