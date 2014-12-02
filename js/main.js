    $(function () {
        $("#tabs").tabs();
        $("#h4 ").click(function (e) {
            $("#toggle1").toggle();
            e.preventDefault();
        });
        $("#h5").click(function (e) {
            $("#toggle2").toggle();
            e.preventDefault();
        });

        // Add codemirror to each text area with class c-code
        var cEditor = '';
        $('.c-code').each(function (index) {
            $(this).attr('id', 'code-' + index);
            CodeMirror.fromTextArea(document.getElementById('code-' + index), {
                mode: "text/x-csrc",
                matchBrackets: true,
                lineNumbers: true,
                readOnly: 'nocursor',
            });
        });
    });