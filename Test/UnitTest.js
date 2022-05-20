function init() {
	logger.setTitle("UnitTest");
}

// Class Ll
const ll_test = {
    run: () => {
		ll.registerPlugin("UnitTest", "LiteLoader Script Engine unit test", [0, 0, 1], {"Author": "LiteLDev"});
		let pluginInfo = ll.getPluginInfo("UnitTest");
		logger.info("ll_test: pluginInfo: ", pluginInfo);
	}
};

init();
ll_test.run();