#if defined(SCRIPTX_LANG_NODEJS)
#include "Global.hpp"
#include "NodeJsHelper.h"
#include "Engine/EngineManager.h"
#include "Engine/EngineOwnData.h"
#include <uv/uv.h>

namespace NodeJsHelper {

bool nodeJsInited = false;
std::vector<std::string> args;
std::vector<std::string> exec_args;
std::unique_ptr<node::MultiIsolatePlatform> platform = nullptr;
std::map<script::ScriptEngine*, node::Environment*> environments;
std::map<script::ScriptEngine*, std::unique_ptr<node::CommonEnvironmentSetup>> setups;

bool initNodeJs() {
    WCHAR buf[MAX_PATH];
    GetCurrentDirectory(MAX_PATH, buf);
    auto path = wstr2str(buf) + "\\bedrock_server_mod.exe";
    char* cPath = (char*)path.c_str();
    uv_setup_args(1, &cPath);
    args = {path};
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

script::ScriptEngine* newEngine() {
    if (!nodeJsInited && !initNodeJs()) {
        return nullptr;
    }
    std::vector<std::string> errors;
    std::unique_ptr<node::CommonEnvironmentSetup> setup =
        node::CommonEnvironmentSetup::Create(platform.get(), &errors, args, exec_args);
    if (!setup) {
        for (const std::string& err : errors)
            logger.error("CommonEnvironmentSetup Error: {}", err.c_str());
        return nullptr;
    }
    v8::Isolate* isolate = setup->isolate();
    node::Environment* env = setup->env();

    v8::Locker locker(isolate);
    v8::Isolate::Scope isolate_scope(isolate);
    v8::HandleScope handle_scope(isolate);
    v8::Context::Scope context_scope(setup->context());

    script::ScriptEngine* engine = new script::ScriptEngineImpl({}, isolate, setup->context());
    
    logger.debug("Initialize ScriptEngine for node.js [{}]", (void*)engine);
    environments.emplace(engine, env);
    setups.emplace(engine, std::move(setup));

    node::AddEnvironmentCleanupHook(
        isolate,
        [](void* arg) {
            static_cast<script::ScriptEngine*>(arg)->destroy();
            logger.debug("Destory ScriptEngine for node.js [{}]", arg);
        },
        engine);
    return engine;
}

bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath)
{
    auto mainScripts = ReadAllFile(entryScriptPath);
    if (!mainScripts) {
        return false;
    }

    //find setup
    auto it = setups.find(engine);
    if (it == setups.end()) return false;

    auto isolate = it->second->isolate();
    auto env = it->second->env();
    auto context = it->second->context();

    try
    {
        v8::Locker locker(isolate);
        v8::Isolate::Scope isolate_scope(isolate);
        v8::HandleScope handle_scope(isolate);
        // The v8::Context needs to be entered when node::CreateEnvironment() and
        // node::LoadEnvironment() are being called.
        v8::Context::Scope context_scope(context);

        /*v8::MaybeLocal<v8::Value> loadenv_ret = */node::LoadEnvironment(
            env,
            ("const publicRequire ="
                "  require('module').createRequire(process.cwd() + '/');"
                "globalThis.require = publicRequire;" +
                *mainScripts)
            .c_str());

        //if (loadenv_ret.IsEmpty()) { // There has been a JS exception.
        //    node::Stop(env);
        //    return false;
        //}
        node::SpinEventLoop(env).FromMaybe(1);
        return true;
    }
    catch (...)
    {
        return false;
    }
}

node::Environment* getEnvironmentOf(script::ScriptEngine* engine) {
    auto it = environments.find(engine);
    if (it == environments.end()) return nullptr;
    return it->second;
}

v8::Isolate* getIsolateOf(script::ScriptEngine* engine) {
    auto it = setups.find(engine);
    if (it == setups.end()) return nullptr;
    return it->second->isolate();
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

bool deployPluginPack(const std::string& filePath) {
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
    return true;
}

std::string findEntryScript(const std::string& dirPath)
{
    auto dirPath_obj = std::filesystem::path(dirPath);

    std::filesystem::path packageFilePath = dirPath_obj / "package.json";
    if (!std::filesystem::exists(packageFilePath))
        return "";

    try {
        std::ifstream file(packageFilePath.make_preferred().u8string());
        nlohmann::json j;
        file >> j;
        std::string entryFile = "index.js";
        if (j.contains("main")) {
            entryFile = j["main"].get<std::string>();
        }
        auto entryPath = dirPath_obj / std::filesystem::path(entryFile);
        if (!std::filesystem::exists(entryPath))
            return "";
        else
            return entryPath.u8string();
    }
    catch (...)
    {
        return "";
    }
}

std::string getPluginPackageName(const std::string& dirPath)
{
    auto dirPath_obj = std::filesystem::path(dirPath);

    std::filesystem::path packageFilePath = dirPath_obj / std::filesystem::path("package.json");
    if (!std::filesystem::exists(packageFilePath))
        return "";

    try {
        std::ifstream file(packageFilePath.make_preferred().u8string());
        nlohmann::json j;
        file >> j;
        std::string packageName = "";
        if (j.contains("name")) {
            packageName = j["name"].get<std::string>();
        }
        return packageName;
    }
    catch (...)
    {
        return "";
    }
}

} // namespace NodeJsHelper

#endif