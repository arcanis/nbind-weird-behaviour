let nbind = require(`nbind`);
let lib = nbind.init().lib;

let point = new lib.Point(42, 66);
console.log('client side row', point.row);
console.log('client side column', point.column);

lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
lib.test(point);
