#if defined(SCRIPTX_LANG_NODEJS)
#include "Global.hpp"
#include "NodeJsHelper.h"
#include "Engine/EngineManager.h"
#include "Engine/EngineOwnData.h"

namespace NodeJsHelper {

bool nodeJsInited = false;
std::vector<std::string> args;
std::vector<std::string> exec_args;
std::unique_ptr<node::MultiIsolatePlatform> platform = nullptr;
std::map<script::ScriptEngine*, node::Environment*> environments;

bool initNodeJs() {
    WCHAR buf[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, buf);
    auto path = wstr2str(buf) + "\\bedrock_server_mod.exe";
    char* cPath = const_cast<char*>(path.c_str());
    auto argv = uv_setup_args(1, &cPath);
    args = std::vector<std::string>(argv, argv + 1);
    std::vector<std::string> errors;
    auto exitCode = node::InitializeNodeWithArgs(&args, &exec_args, &errors);
    if (exitCode != 0) {
        logger.error("Failed to initialize node! NodeJs plugins won't be loaded");
        return false;
    }

    using namespace v8;
    platform = node::MultiIsolatePlatform::Create(std::thread::hardware_concurrency());
    V8::InitializePlatform(platform.get());
    V8::Initialize();
    return nodeJsInited = true;
}

void shutdownNodeJs() {
    v8::V8::Dispose();
    v8::V8::ShutdownPlatform();
}

std::pair<script::ScriptEngine*, std::unique_ptr<node::CommonEnvironmentSetup>> newEngine() {
    if (!nodeJsInited && !initNodeJs()) {
        return {nullptr, nullptr};
    }
    std::vector<std::string> errors;
    std::unique_ptr<node::CommonEnvironmentSetup> setup =
        node::CommonEnvironmentSetup::Create(platform.get(), &errors, args, exec_args);
    v8::Isolate* isolate = setup->isolate();
    node::Environment* env = setup->env();

    script::ScriptEngine* engine = new script::ScriptEngineImpl({}, isolate, setup->context());
    logger.debug("Initialize ScriptEngine for node.js [{}]", (void*)engine);
    environments.emplace(engine, env);

    engine->setData(std::make_shared<EngineOwnData>());

    EngineManager::registerEngine(engine);

    node::AddEnvironmentCleanupHook(
        isolate,
        [](void* arg) {
            static_cast<script::ScriptEngine*>(arg)->destroy();
            logger.debug("Destory ScriptEngine for node.js [{}]", arg);
        },
        engine);
    return {engine, std::move(setup)};
}

node::Environment* getEnvironmentOf(script::ScriptEngine* engine) {
    auto it = environments.find(engine);
    if (it == environments.end()) return nullptr;
    return it->second;
}

int spinEventLoop(script::ScriptEngine* engine) {
    auto env = NodeJsHelper::getEnvironmentOf(engine);
    if (!env) {
        logger.error("Failed in loading script plugin: Cannot get nodejs environment!");
        return 1;
    }
    return node::SpinEventLoop(env).FromMaybe(1);
}

int stopEngine(script::ScriptEngine* engine) {
    auto env = NodeJsHelper::getEnvironmentOf(engine);
    if (!env) {
        logger.error("Failed in loading script plugin: Cannot get nodejs environment!");
        return 1;
    }
    return node::Stop(env);
}

bool processPluginPack(const std::string& filePath) {
    if (!EndsWith(filePath, LLSE_PLUGINPACK_EXTENSION)) {
        return false;
    }
    std::filesystem::create_directories(LLSE_NODEJS_TEMP_DIR);
    auto&& [exitCode, output] = NewProcessSync(fmt::format("{} x \"{}\" -o\"{}\" -aoa", LLSE_7Z_PATH, filePath, LLSE_NODEJS_TEMP_DIR "/"),
                                               LLSE_NODEJS_UNCOMPRESS_TIMEOUT);
    if (exitCode != 0) {
        logger.error("Failed to uncompress Node.js plugin pack!");
        logger.debug(output);
        return false;
    }
    if (std::filesystem::exists(LLSE_NODEJS_TEMP_DIR "/package.json")) {
        auto pluginName = std::filesystem::path(filePath).stem().u8string();
        auto& dest = std::filesystem::path(LLSE_NODEJS_DIR)
                        .append(pluginName.substr(0, pluginName.length() - 3));
        nlohmann::json j;
        std::fstream file(LLSE_NODEJS_TEMP_DIR "/package.json");
        file >> j;
        if (j.contains("name")) {
            dest = std::filesystem::path(LLSE_NODEJS_DIR).append(j["name"].get<std::string>());
        }
        file.close();
        std::filesystem::copy(LLSE_NODEJS_TEMP_DIR "/", dest);
    }
    std::filesystem::remove_all(LLSE_NODEJS_TEMP_DIR);
}

} // namespace NodeJsHelper

#endif