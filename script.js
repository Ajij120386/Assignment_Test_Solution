

$(document).ready(function() {

  $('#carTable').DataTable();

  $('#carType').change(function() {
      toggleFields();
  });
});


function toggleFields() {

  var carType = $('#carType').val();
  $('#batteryCapacityField').toggle(carType === 'Electric');
  $('#fuelEfficiencyField').toggle(carType === 'Gas');
}

function addCar(event) {

  event.preventDefault();

  var carType = $('#carType').val();
  var name = $('#name').val();
  var model = $('#model').val();
  var year = $('#year').val();
  var batteryCapacity = $('#batteryCapacity').val();
  var fuelEfficiency = $('#fuelEfficiency').val();
  

  var table = $('#carTable').DataTable();
  table.row.add([carType, name, model, year, batteryCapacity, fuelEfficiency]).draw();

  $('#carForm')[0].reset();
  toggleFields();
}
