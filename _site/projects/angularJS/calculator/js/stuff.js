
var app1 = angular.module('app1', []);
 
app1.controller('ctrl1', function() {

  var vm = this;

  vm.first = 1;
  vm.second = 1;
  vm.log =[];

  vm.addValue = function() {
    var vm = this;
    vm.calculation = vm.first + ' + ' + vm.second +
      " = " + (+vm.first + +vm.second);
    vm.log.push(vm.calculation);
  };
  vm.subtractValue = function() {
    vm.calculation = vm.first + ' - ' + vm.second +
      " = " + (+vm.first - +vm.second);
    vm.log.push(vm.calculation);
  };
  vm.multiplyValue = function(){
    vm.calculation = vm.first + ' * ' + vm.second + 
      " = " + (+vm.first * +vm.second);
    vm.log.push(vm.calculation);
  };
  vm.divideValue = function(){
    vm.calculation = vm.first + ' / ' + vm.second + 
      " = " + (+vm.first / +vm.second);
    vm.log.push(vm.calculation);
  };

});