const PLUGIN_DIR = "./plugins/UnitTest/";

// Class Ll
const ll_test = {
    run: function () {
        ll.registerPlugin("UnitTest", "LiteLoader Script Engine unit test", [0, 0, 1], { "Author": "LiteLDev" });
        let pluginInfo = ll.getPluginInfo("UnitTest");
        logger.info("ll_test: run: pluginInfo: ", pluginInfo);
    }
};
// Class File
const file_test = {
    text_file: PLUGIN_DIR + "file_test_write.txt",
    binary_file: PLUGIN_DIR + "file_test_write.bin",
    run: function () {
        // mkdir
        file.mkdir(PLUGIN_DIR);
        this.write_sync();
    },
    write_sync: function () {
        file.writeTo(this.text_file, "bbbbbbbb") // 8 * b
        let file1 = new File(this.text_file, file.WriteMode);
        file1.writeSync("aaaaa"); // 5 * a
        file1.close();
        logger.info("file_test: write_sync: Writing text done.");
        let file2 = new File(this.binary_file, file.WriteMode, true);
        let bytes = new Uint8Array([1, 2, 3, 4, 5, 6, 7, 8]);
        file2.writeSync(bytes);
        file2.close();
    }
}
// Class HttpServer
const http_server_test = {
    listen_address: "127.0.0.1",
    listen_port: 23333,
    server: null,
    run: function () {
        this.server = new HttpServer();
        this.server.onGet("/hello(.+)", (req, resp) => {
            logger.info("http_server_test: run: onGet: Received a request from ", req.remoteAddr,
                ':', req.remotePort, " for ", req.path);
            resp.write("<html><body>")
                .write("<h1>It works!</h1>")
                .write("<br/>")
                .write("<p>Request Headers: ", JSON.stringify(req.headers, null, 4), "</p>")
                .write("<p>Request Body: ", req.body, "</p>")
                .write("<p>Your Address: ", req.remoteAddr, ':', req.remotePort, "</p>")
                .write("<p>HTTP Version: ", req.version, "</p>")
                .write("<p>Method: ", req.method, "</p>")
                .write("<p>Path: ", req.path, "</p>")
                .write("<p>Parsed Query: ", JSON.stringify(req.query, null, 4), "</p>")
                .write("<p>Path Regex Matches: ", JSON.stringify(req.matches), "</p>")
                .write("</body></html>")
            resp.status = 200;
            resp.reason = "OK";
            resp.setHeader("Content-Type", "text/html");
        }).onGet("/404", (req, resp) => {
            resp.status = 404;
            resp.reason = "Not Found";
            resp.write("Not Found");
        }).onGet("/test-redirect", (req, resp) => {
            // https://developer.mozilla.org/zh-CN/docs/Web/HTTP/Redirections
            resp.status = 301;
            resp.reason = "Moved Permanently";
            resp.setHeader("Location", "https://github.com");
        }).onGet("/(.+)", (req, resp) => {
            resp.write("Hello World! ", req.matches);
        }).onPreRouting((req, resp) => {
            logger.info("http_server_test: run: onPreRouting: resp.body.length: ", resp.body.length);
            if (req.path == "/test-prerouting") {
                resp.body = "Hello World!";
                resp.status = 200;
                resp.reason = "OK";
                return false;
            }
        }).onPostRouting((req, resp) => {
            logger.info("http_server_test: run: onPostRouting: resp.body.length: ", resp.body.length);
        }).onError((req, resp) => {
            resp.write("\nonError called");
        }).listen(this.listen_address, this.listen_port);
        logger.info("http_server_test: run: Server listening on " + this.listen_address + ":" + this.listen_port);
    },
    stop: function () {
        this.server.stop();
        logger.info("http_server_test: stop: Server stopped");
    },
    command: {
        subcmd_name: "http_server",
        register: function (cmd) {
            cmd.setEnum("http_server_action_stop", ["stop"]);
            cmd.mandatory("http_server_action", ParamType.Enum, "http_server_action_stop");
            cmd.overload(["cmd", "http_server_action_stop"]);
        },
        handler: function (_cmd, _ori, _outp, res) {
            if (res["http_server_action"] == "stop") {
                http_server_test.stop();
            }
        }
    }
}
// Class JsonConfigFile
const json_config_file_test = {
    file: PLUGIN_DIR + "json_config_file_test.json",
    run: function () {
        let config = new JsonConfigFile(this.file);
        config.init("test1", "test");
        config.init("test2", [1145141919810, "test2"]);
        config.init("test3", 2333333333);
        config.init("test4", { test: "test" });
        logger.info("json_config_file_test: run: test1: ", config.get("test1"));
        logger.info("json_config_file_test: run: test2: ", config.get("test2"));
        logger.info("json_config_file_test: run: test3: ", config.get("test3"));
        logger.info("json_config_file_test: run: test4: ", config.get("test4"));
    }
}

///////////////////////////////////// CLASSES //////////////////////////////////////
const CLASSES = [
    ll_test,
    file_test,
    http_server_test,
    json_config_file_test
];

///////////////////////////////// UNIT TEST COMMAND /////////////////////////////////
function RegisterUnitTestCommand() {
    let cmd = mc.newCommand("unit_test", "UnitTest command", PermType.GameMasters, 0x80, "utest");
    let subcmds = [];
    let handlers = {};
    CLASSES.forEach(clazz => {
        if (clazz["command"] != null) {
            subcmds.push(clazz.command.subcmd_name);
            handlers[clazz.command.subcmd_name] = clazz.command.handler;
        }
    });
    cmd.setEnum("subcmds", subcmds);
    cmd.mandatory("cmd", ParamType.Enum, "subcmds");
    cmd.overload(["cmd"]);
    CLASSES.forEach(clazz => {
        if (clazz["command"] != null) {
            clazz.command.register(cmd);
        }
    });
    cmd.setCallback(function (cmd, ori, outp, res) {
        if (res.cmd != null) {
            let handler = handlers[res.cmd];
            if (handler != null) {
                handler(cmd, ori, outp, res);
            }
        }
    });
    cmd.setup();
}


function init() {
    logger.setTitle("UnitTest");
    RegisterUnitTestCommand();
}
init();
ll_test.run();
file_test.run();
http_server_test.run();
json_config_file_test.run();