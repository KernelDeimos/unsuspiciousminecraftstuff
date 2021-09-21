var path = require('path');
var ref = require("ref-napi");
var ffi = require("ffi-napi");

var libFilename = './main.so';
var lib = ffi.Library(path.join(__dirname, libFilename), {
    next_int: ["int", []],
    next_double: ["double", []],
});


console.log(lib.next_int());
console.log(lib.next_double());
