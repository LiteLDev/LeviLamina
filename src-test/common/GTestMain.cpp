#include "gtest/gtest.h"

#include <memory>
#include <string>
#include <string_view>

#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/utils/StringUtils.h"

namespace {

ll::io::Logger& getGTestLogger() {
    static auto logger = ll::io::LoggerRegistry::getInstance().getOrCreate("GTest");
    return *logger;
}
static ll::io::Logger& logger = getGTestLogger();

class LlTestEventListener final : public testing::TestEventListener {
private:
    static constexpr std::string_view separator = "----------------------------------------";

    static void logTestProperty(testing::TestProperty const& property) {
        logger.debug("property {}={}", property.key(), property.value());
    }

    static void logTestResultDetails(testing::TestResult const& result, std::string_view prefix) {
        for (int i = 0; i < result.test_property_count(); ++i) {
            logger.debug("{} property {}", prefix, i + 1);
            logTestProperty(result.GetTestProperty(i));
        }
    }

public:
    void OnTestProgramStart(testing::UnitTest const& unitTest) override {
        logger.info(
            "start: {} test suites, {} tests, {} disabled",
            unitTest.total_test_suite_count(),
            unitTest.test_to_run_count(),
            unitTest.disabled_test_count()
        );
    }

    void OnTestIterationStart(testing::UnitTest const&, int iteration) override {
        logger.info("{} iteration {}", separator, iteration + 1);
    }

    void OnEnvironmentsSetUpStart(testing::UnitTest const&) override { logger.debug("environment setup start"); }

    void OnEnvironmentsSetUpEnd(testing::UnitTest const&) override { logger.debug("environment setup end"); }

    void OnTestSuiteStart(testing::TestSuite const& testSuite) override {
        logger.info("{} suite {} ({} tests)", separator, testSuite.name(), testSuite.test_to_run_count());
    }

    void OnTestStart(testing::TestInfo const& testInfo) override {
        logger.info("RUN      {}.{}", testInfo.test_suite_name(), testInfo.name());
    }

    void OnTestDisabled(testing::TestInfo const& testInfo) override {
        logger.debug("DISABLED {}.{}", testInfo.test_suite_name(), testInfo.name());
    }

    void OnTestPartResult(testing::TestPartResult const& result) override {
        auto file = result.file_name() != nullptr ? result.file_name() : "<unknown>";
        auto line = result.line_number();
        auto text = std::string{result.message()};

        auto lines = ll::string_utils::splitByPattern(text, "\n");

        if (lines.empty()) {
            lines.emplace_back(text);
        }

        if (result.failed()) {
            for (size_t i = 0; i < lines.size(); ++i) {
                if (i == 0) {
                    logger.error("{}:{} {}", file, line, lines[i]);
                } else {
                    logger.error("{}", lines[i]);
                }
            }
            return;
        }
        for (size_t i = 0; i < lines.size(); ++i) {
            if (i == 0) {
                logger.debug("{}:{} {}", file, line, lines[i]);
            } else {
                logger.debug("{}", lines[i]);
            }
        }
    }

    void OnTestEnd(testing::TestInfo const& testInfo) override {
        auto& result = *testInfo.result();
        logTestResultDetails(result, "test");

        if (result.Passed()) {
            logger.info("OK       {}.{} ({} ms)", testInfo.test_suite_name(), testInfo.name(), result.elapsed_time());
            return;
        }

        if (result.Skipped()) {
            logger.warn("SKIPPED  {}.{} ({} ms)", testInfo.test_suite_name(), testInfo.name(), result.elapsed_time());
            return;
        }

        logger.error("FAILED   {}.{} ({} ms)", testInfo.test_suite_name(), testInfo.name(), result.elapsed_time());
    }

    void OnTestSuiteEnd(testing::TestSuite const& testSuite) override {
        logTestResultDetails(testSuite.ad_hoc_test_result(), "suite");
        logger.debug(
            "suite end {}: {} passed, {} failed, {} skipped, {} disabled",
            testSuite.name(),
            testSuite.successful_test_count(),
            testSuite.failed_test_count(),
            testSuite.skipped_test_count(),
            testSuite.disabled_test_count()
        );
    }

    void OnEnvironmentsTearDownStart(testing::UnitTest const&) override { logger.debug("environment teardown start"); }

    void OnEnvironmentsTearDownEnd(testing::UnitTest const&) override { logger.debug("environment teardown end"); }

    void OnTestIterationEnd(testing::UnitTest const& unitTest, int iteration) override {
        logger.debug(
            "iteration {} end: {} passed, {} failed, {} skipped",
            iteration + 1,
            unitTest.successful_test_count(),
            unitTest.failed_test_count(),
            unitTest.skipped_test_count()
        );
    }

    void OnTestProgramEnd(testing::UnitTest const& unitTest) override {
        logTestResultDetails(unitTest.ad_hoc_test_result(), "program");

        if (unitTest.Passed()) {
            logger.info(
                "done: {} passed, {} skipped, {} disabled",
                unitTest.successful_test_count(),
                unitTest.skipped_test_count(),
                unitTest.disabled_test_count()
            );
            return;
        }

        logger.error(
            "done: {} passed, {} failed, {} skipped, {} disabled",
            unitTest.successful_test_count(),
            unitTest.failed_test_count(),
            unitTest.skipped_test_count(),
            unitTest.disabled_test_count()
        );
    }
};

static bool gmain = [] {
    using namespace ll;

    thread::ServerThreadExecutor::getDefault().execute([&] {
        testing::InitGoogleTest();
        auto& listeners = testing::UnitTest::GetInstance()->listeners();
        delete listeners.Release(listeners.default_result_printer());
        listeners.Append(new LlTestEventListener());

        [[maybe_unused]] auto result = RUN_ALL_TESTS();
        logger.debug("RUN_ALL_TESTS() returned {}", result);
    });

    return true;
}();

} // namespace
