const PLUGIN_DIR = "./plugins/UnitTest/";

function init() {
	logger.setTitle("UnitTest");
}

// Class Ll
const ll_test = {
    run: function() {
		ll.registerPlugin("UnitTest", "LiteLoader Script Engine unit test", [0, 0, 1], {"Author": "LiteLDev"});
		let pluginInfo = ll.getPluginInfo("UnitTest");
		logger.info("ll_test: run: pluginInfo: ", pluginInfo);
	}
};
// Class File
const file_test = {
	text_file: PLUGIN_DIR + "file_test_write.txt",
	binary_file: PLUGIN_DIR + "file_test_write.bin",
	run: function() {
		// mkdir
		file.mkdir(PLUGIN_DIR);
		this.write_sync();
	},
	write_sync: function() {
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

init();
ll_test.run();
file_test.run();