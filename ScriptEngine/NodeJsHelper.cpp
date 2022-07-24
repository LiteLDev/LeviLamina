#if defined(SCRIPTX_LANG_NODEJS)
#include "Global.hpp"
#include <ScheduleAPI.h>
#include <EventAPI.h>
#include <LLAPI.h>
#include <Utils/StringHelper.h>
#include "NodeJsHelper.h"
#include "Engine/EngineManager.h"
#include "Engine/EngineOwnData.h"
#include <NodeJs/include/uv/uv.h>
#include <NodeJs/include/v8/v8.h>

namespace NodeJsHelper {

bool nodeJsInited = false;
std::vector<std::string> args;
std::vector<std::string> exec_args;
std::unique_ptr<node::MultiIsolatePlatform> platform = nullptr;
std::map<script::ScriptEngine*, node::Environment*> environments;
std::map<script::ScriptEngine*, std::unique_ptr<node::CommonEnvironmentSetup>> setups;

bool initNodeJs() {
    // Init NodeJs
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

    // Init V8
    using namespace v8;
    platform = node::MultiIsolatePlatform::Create(std::thread::hardware_concurrency());
    V8::InitializePlatform(platform.get());
    V8::Initialize();
    
    /*// Set Cleanup
    Event::ServerStoppedEvent::subscribe([](Event::ServerStoppedEvent) {
        shutdownNodeJs();
        return true;
    });*/

    nodeJsInited = true;
    return true;
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
        node::CommonEnvironmentSetup::Create(platform.get(), &errors, args, exec_args, node::EnvironmentFlags::kOwnsProcessState);
    //if kOwnsInspector set, inspector_agent.cc:681 CHECK_EQ(start_io_thread_async_initialized.exchange(true), false) fail!
    
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

    script::ScriptEngine* engine = new script::ScriptEngineImpl({}, isolate, setup->context(), false);
    
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

bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath, std::string pluginDirPath)
{
    auto mainScripts = ReadAllFile(entryScriptPath);
    if (!mainScripts) {
        return false;
    }

    // Process requireDir
    if (!EndsWith(pluginDirPath, "/"))
        pluginDirPath += "/";
    pluginDirPath = ReplaceStr(pluginDirPath, "\\", "/");

    // Find setup
    auto it = setups.find(engine);
    if (it == setups.end()) return false;

    auto isolate = it->second->isolate();
    auto env = it->second->env();

    try
    {
        EngineScope enter(engine);

        string executeJs =
            "const publicRequire = require('module').createRequire(process.cwd() + '/" + pluginDirPath + "');"
            + "globalThis.require = publicRequire;"
            + *mainScripts;
        node::LoadEnvironment(env, executeJs.c_str());

        //if (loadenv_ret.IsEmpty()) { 
        //    node::Stop(env);
        //    return false;
        //}

        Schedule::repeat([eventLoop{ it->second->event_loop() }]() {
            if(!LL::isServerStopping())
                uv_run(eventLoop, UV_RUN_NOWAIT);
        }, 2);
        
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

int stopEngine(script::ScriptEngine* engine) {
    auto env = NodeJsHelper::getEnvironmentOf(engine);
    if (!env)
        return 0;
    return node::Stop(env);
}

bool deployPluginPack(const std::string& filePath) {
    if (!EndsWith(filePath, LLSE_PLUGINPACK_EXTENSION)) {
        return false;
    }
    error_code ec;
    std::filesystem::create_directories(LLSE_NODEJS_TEMP_DIR, ec);
    auto&& [exitCode, output] = NewProcessSync(fmt::format("{} x \"{}\" -o\"{}\" -aoa", LLSE_7Z_PATH, filePath, LLSE_NODEJS_TEMP_DIR "/"),
                                               LLSE_NODEJS_UNCOMPRESS_TIMEOUT);
    if (exitCode != 0) {
        logger.error("Failed to uncompress Node.js plugin pack!");
        logger.debug(output);
        return false;
    }
    if (std::filesystem::exists(LLSE_NODEJS_TEMP_DIR "/package.json")) {
        auto pluginName = NodeJsHelper::getPluginPackageName(LLSE_NODEJS_TEMP_DIR);
        if (pluginName.empty())
        {
            pluginName = std::filesystem::path(filePath).stem().u8string().substr(0, pluginName.length() - 3);
            // remove ".ll" at end
        }
        auto dest = std::filesystem::path(LLSE_NODEJS_ROOT_DIR).append(pluginName);
        //if (filesystem::exists(dest))
        //    filesystem::remove_all(dest, ec);
        std::filesystem::copy(LLSE_NODEJS_TEMP_DIR "/", dest, 
            filesystem::copy_options::overwrite_existing | filesystem::copy_options::recursive, ec);
    }
    std::filesystem::remove_all(LLSE_NODEJS_TEMP_DIR, ec);
    std::filesystem::remove(filePath, ec);
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
        auto entryPath = std::filesystem::canonical(dirPath_obj / std::filesystem::path(entryFile));
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

bool doesPluginPackHasDependency(const std::string& dirPath)
{
    auto dirPath_obj = std::filesystem::path(dirPath);

    std::filesystem::path packageFilePath = dirPath_obj / std::filesystem::path("package.json");
    if (!std::filesystem::exists(packageFilePath))
        return false;

    try {
        std::ifstream file(packageFilePath.make_preferred().u8string());
        nlohmann::json j;
        file >> j;
        if (j.contains("dependencies")) {
            return true;
        }
        return false;
    }
    catch (...)
    {
        return false;
    }
}

bool processConsoleNpmCmd(const std::string& cmd)
{
#ifdef SCRIPTX_LANG_NODEJS
    if (StartsWith(cmd, "npm "))
    {
        executeNpmCommand(cmd);
        return false;
    }
    else
        return true;
#else
    return true;
#endif
}

int executeNpmCommand(std::string cmd, std::string workingDir)
{
    if (!nodeJsInited && !initNodeJs()) {
        return -1;
    }
    std::vector<std::string> errors;
    std::unique_ptr<node::CommonEnvironmentSetup> setup =
        node::CommonEnvironmentSetup::Create(platform.get(), &errors, args, exec_args, node::EnvironmentFlags::kOwnsProcessState);
    //if kOwnsInspector set, inspector_agent.cc:681 CHECK_EQ(start_io_thread_async_initialized.exchange(true), false) fail!

    if (!setup) {
        for (const std::string& err : errors)
            logger.error("CommonEnvironmentSetup Error: {}", err.c_str());
        return -1;
    }
    v8::Isolate* isolate = setup->isolate();
    node::Environment* env = setup->env();
    int exit_code = 0;

    //Process workingDir
    workingDir = ReplaceStr(workingDir, "\\", "/");

    {
        using namespace v8;
        v8::Locker locker(isolate);
        v8::Isolate::Scope isolate_scope(isolate);
        v8::HandleScope handle_scope(isolate);
        v8::Context::Scope context_scope(setup->context());

        string executeJs = 
            "const publicRequire = require('module').createRequire(process.cwd() + '/plugins/lib/');"
            "require('process').chdir('" + workingDir + "');"
            + "publicRequire('npm-js-interface')('" + cmd + "');";

        try
        {
            MaybeLocal<v8::Value> loadenv_ret = node::LoadEnvironment(env, executeJs.c_str());
            if (loadenv_ret.IsEmpty())  // There has been a JS exception.
                throw "error";
            exit_code = node::SpinEventLoop(env).FromMaybe(1);
        }
        catch(...)
        {
            logger.error("Fail to execute NPM command. Error occurs");
        }
    }

    node::Stop(env);
    return exit_code;
}

} // namespace NodeJsHelper

#endif