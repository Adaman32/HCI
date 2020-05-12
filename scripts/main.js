
var cursor = document.getElementById('cursor');
document.addEventListener('mousemove',function(e){
  var x = e.pageX;
  var y = e.pageY;
  cursor.style.left = x + "px";
  cursor.style.top = y + "px";

});

window.addEventListener('mousemove', function(e) {
    var elem = document.createElement('div');
    var size = 15 + 'px';
    elem.style.position = 'absolute';
    elem.style.top = e.pageY  + 'px';
    elem.style.left = e.pageX  + 'px';
    elem.style.width = size;
    elem.style.height = size;
    elem.style.border = '1px solid #B9340D';
    elem.style.opacity = '30%';
    elem.style.transform = 'translate(-50%,-50%)';
    elem.style.borderRadius = size;
    elem.style.pointerEvents = 'none';
    elem.style.cursor = 'none';
    document.body.appendChild(elem);
    window.setTimeout(function() {
      document.body.removeChild(elem);
    }, Math.round(250));
}, false);


var moveForce = 40; // max popup movement in pixels
var rotateForce = 20; // max popup rotation in deg

$(document).mousemove(function(e) {
    var docX = $(document).width();
    var docY = $(document).height();

    var moveX = (e.pageX - docX/2) / (docX/2) * -moveForce;
    var moveY = (e.pageY - docY/2) / (docY/2) * -moveForce;

    var rotateY = (e.pageX / docX * rotateForce*2) - rotateForce;
    var rotateX = -((e.pageY / docY * rotateForce*2) - rotateForce);

    $('.popup')
        .css('left', moveX+'px')
        .css('top', moveY+'px')
        .css('transform', 'rotateX('+rotateX+'deg) rotateY('+rotateY+'deg)');
    $('#title')
      .css('left', moveX+'px')
      .css('top', moveY+'px')
      .css('transform', 'rotateX('+rotateX+'deg) rotateY('+rotateY+'deg)');
    $('#back')
      .css('left', moveX+'px')
      .css('top', moveY+'px')
      .css('transform', 'rotateX('+rotateX+'deg) rotateY('+rotateY+'deg)');
});
