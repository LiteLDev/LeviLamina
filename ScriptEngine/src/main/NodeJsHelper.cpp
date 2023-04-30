#pragma warning(disable : 4251)
#include "main/Configs.h"
#if defined(LLSE_BACKEND_NODEJS)
#include "main/Global.hpp"
#include <llapi/ScheduleAPI.h>
#include "api/EventAPI.h"
#include "api/CommandCompatibleAPI.h"
#include "api/CommandAPI.h"
#include "engine/RemoteCall.h"
#include <llapi/LLAPI.h>
#include <llapi/utils/StringHelper.h>
#include "main/NodeJsHelper.h"
#include "engine/EngineManager.h"
#include "engine/EngineOwnData.h"
#include <uv/uv.h>
#include <v8/v8.h>

// pre-declare
extern void BindAPIs(ScriptEngine* engine);

namespace NodeJsHelper {

bool nodeJsInited = false;
std::vector<std::string> args;
std::vector<std::string> exec_args;

std::unique_ptr<node::MultiIsolatePlatform> platform = nullptr;
std::unordered_map<script::ScriptEngine*, node::Environment*> environments;
std::unordered_map<script::ScriptEngine*, std::unique_ptr<node::CommonEnvironmentSetup>>* setups = new std::unordered_map<script::ScriptEngine*, std::unique_ptr<node::CommonEnvironmentSetup>>();
std::unordered_map<node::Environment*, bool> isRunning;
std::unordered_map<node::Environment*, ScheduleTask> uvLoopTask;

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
    environments[engine] = env;
    (*setups)[engine] = std::move(setup);
    isRunning[env] = true;

    node::AddEnvironmentCleanupHook(
        isolate,
        [](void* arg) {
            static_cast<script::ScriptEngine*>(arg)->destroy();
            logger.debug("Destory ScriptEngine for node.js [{}]", arg);
            logger.debug("Destroy EnvironmentCleanupHook");
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
    auto it = setups->find(engine);
    if (it == setups->end())
        return false;

    auto isolate = it->second->isolate();
    auto env = it->second->env();

    try
    {
        using namespace v8;
        EngineScope enter(engine);

        string executeJs =
            "const __LLSE_PublicRequire = require('module').createRequire(process.cwd() + '/" + pluginDirPath + "');"
            + "const __LLSE_PublicModule = require('module'); __LLSE_PublicModule.exports = {};"
            + "ll.export = ll.exports; ll.import = ll.imports; "

            + "(function (exports, require, module, __filename, __dirname) { "
            + *mainScripts + "\n})({}, __LLSE_PublicRequire, __LLSE_PublicModule, '"
            + entryScriptPath + "', '" + pluginDirPath + "'); ";        // TODO __filename & __dirname need to be reviewed
        //TODO: ESM Support

        // Set exit handler
        node::SetProcessExitHandler(env, [](node::Environment* env_, int exit_code){
            stopEngine(getEngine(env_));
        });

        // Load code
        MaybeLocal<v8::Value> loadenv_ret = node::LoadEnvironment(env, executeJs.c_str());
        if (loadenv_ret.IsEmpty()) // There has been a JS exception.
        {
            node::Stop(env);
            uv_stop(it->second->event_loop());
            return false;
        }

        // Start libuv event loop
        uvLoopTask[env] = Schedule::repeat([engine, env, isRunningMap{&isRunning}, eventLoop{it->second->event_loop()}]() {
            if (!ll::isServerStopping() && (*isRunningMap)[env]) {
                EngineScope enter(engine);
                uv_run(eventLoop, UV_RUN_NOWAIT);
            }
            if (ll::isServerStopping()) {
                uv_stop(eventLoop);
                logger.debug("Destroy ServerStopping");
            }
        },2);
        
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
    auto it = setups->find(engine);
    if (it == setups->end())
        return nullptr;
    return it->second->isolate();
}

bool stopEngine(node::Environment* env)
{
    if (!env)
        return false;
    try
    {
        // Set flag
        isRunning[env] = false;

        // Stop code executing
        node::Stop(env);

        // Stop libuv event loop
        auto it = uvLoopTask.find(env);
        if (it != uvLoopTask.end())
        {
            it->second.cancel();
        }

        return true;
    }
    catch (...)
    {
        logger.error("Fail to stop engine {}", (void*)env);
        return false;
    }
}

bool stopEngine(script::ScriptEngine* engine) {
    logger.info("NodeJs plugin {} exited.", ENGINE_GET_DATA(engine)->pluginName);
    auto env = NodeJsHelper::getEnvironmentOf(engine);
    return stopEngine(env);
}

script::ScriptEngine* getEngine(node::Environment* env)
{
    for (auto& [engine, environment] : environments)
        if (env == environment)
            return engine;
    return nullptr;
}

// Load NodeJs plugin
// This function must be called in correct backend
bool loadNodeJsPlugin(std::string dirPath, const std::string& packagePath, bool isHotLoad) {
    // "dirPath" is always public temp dir (LLSE_PLUGIN_PACKAGE_TEMP_DIR)
    if (dirPath == LLSE_PLUGIN_PACKAGE_TEMP_DIR)
    {
        // Need to copy from temp dir to installed dir
        if (std::filesystem::exists(LLSE_PLUGIN_PACKAGE_TEMP_DIR "/package.json")) {
            auto pluginName = NodeJsHelper::getPluginPackageName(LLSE_PLUGIN_PACKAGE_TEMP_DIR);
            if (pluginName.empty())
            {
                pluginName = UTF82String(filesystem::path(packagePath).filename().replace_extension("").u8string());
            }
            auto dest = std::filesystem::path(LLSE_PLUGINS_ROOT_DIR).append(pluginName);

            // copy files
            std::error_code ec;
            //if (filesystem::exists(dest))
            //    filesystem::remove_all(dest, ec);
            std::filesystem::copy(LLSE_PLUGIN_PACKAGE_TEMP_DIR "/", dest,
                filesystem::copy_options::overwrite_existing | filesystem::copy_options::recursive, ec);

            // reset dirPath
            dirPath = UTF82String(dest.u8string());
        }
        // remove temp dir
        std::error_code ec;
        std::filesystem::remove_all(LLSE_PLUGIN_PACKAGE_TEMP_DIR, ec);
    }

    std::string entryPath = NodeJsHelper::findEntryScript(dirPath);
    if (entryPath.empty())
        return false;
    std::string pluginName = NodeJsHelper::getPluginPackageName(dirPath);

    // Run "npm install" if needed
    if (NodeJsHelper::doesPluginPackHasDependency(dirPath) && !filesystem::exists(filesystem::path(dirPath) / "node_modules")) {
        int exitCode = 0;
        logger.info(tr("llse.loader.nodejs.executeNpmInstall.start", fmt::arg("name", UTF82String(filesystem::path(dirPath).filename().u8string()))));
        if ((exitCode = NodeJsHelper::executeNpmCommand("npm install", dirPath)) == 0)
            logger.info(tr("llse.loader.nodejs.executeNpmInstall.success"));
        else
            logger.error(tr("llse.loader.nodejs.executeNpmInstall.fail", fmt::arg("code", exitCode)));
    }

    // Create engine & Load plugin
    ScriptEngine* engine = nullptr;
    node::Environment* env = nullptr;
    try {
        engine = EngineManager::newEngine();
        {
            EngineScope enter(engine);
            // setData
            ENGINE_OWN_DATA()->pluginName = pluginName;
            ENGINE_OWN_DATA()->pluginFileOrDirPath = dirPath;
            ENGINE_OWN_DATA()->logger.title = pluginName;
            // bindAPIs
            BindAPIs(engine);
        }
        if (!NodeJsHelper::loadPluginCode(engine, entryPath, dirPath))
            throw "Uncaught exception thrown in code";

        if (!PluginManager::getPlugin(pluginName)) {
            // Plugin did't register itself. Help to register it
            string description = pluginName;
            ll::Version ver(1, 0, 0);
            std::map<string, string> others = {};

            // Read information from package.json
            try {
                std::filesystem::path packageFilePath = std::filesystem::path(dirPath) / "package.json";
                std::ifstream file(UTF82String(packageFilePath.make_preferred().u8string()));
                nlohmann::json j;
                file >> j;
                file.close();

                // description
                if (j.contains("description")) {
                    description = j["description"].get<std::string>();
                }
                // version
                if (j.contains("version") && j["version"].is_string()) {
                    ver = ll::Version::parse(j["version"].get<std::string>());
                }
                // license
                if (j.contains("license") && j["license"].is_string()) {
                    others["License"] = j["license"].get<std::string>();
                }
                else if (j["license"].is_object() && j["license"].contains("url")) {
                    others["License"] = j["license"]["url"].get<std::string>();
                }
                // repository
                if (j.contains("repository") && j["repository"].is_string()) {
                    others["Repository"] = j["repository"].get<std::string>();
                }
                else if (j["repository"].is_object() && j["repository"].contains("url")) {
                    others["Repository"] = j["repository"]["url"].get<std::string>();
                }
            }
            catch (...) {
                logger.warn(tr("llse.loader.nodejs.register.fail", fmt::arg("name", pluginName)));
            }

            // register
            PluginManager::registerPlugin(dirPath, pluginName, description, ver, others);
        }

        // Call necessary events when at hot load
        if (isHotLoad)
            LLSECallEventsOnHotLoad(engine);

        // Success
        logger.info(tr("llse.loader.loadMain.loadedPlugin",
            fmt::arg("type", "Node.js"),
            fmt::arg("name", pluginName)));
        return true;
    }
    catch (const Exception& e) {
        logger.error("Fail to load " + dirPath + "!");
        if (engine) {
            EngineScope enter(engine);
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            PrintException(e);
            ExitEngineScope exit;

            // NodeJs use his own setTimeout, so no need to remove
            // LLSERemoveTimeTaskData(engine);

            LLSERemoveAllEventListeners(engine);
            LLSERemoveCmdRegister(engine);
            LLSERemoveCmdCallback(engine);
            LLSERemoveAllExportedFuncs(engine);

            engine->getData().reset();
            EngineManager::unRegisterEngine(engine);
        }
        if (engine) {
            NodeJsHelper::stopEngine(engine);
        }
    }
    catch (const std::exception& e) {
        logger.error("Fail to load " + dirPath + "!");
        logger.error(TextEncoding::toUTF8(e.what()));
    }
    catch (...) {
        logger.error("Fail to load " + dirPath + "!");
    }
    return false;
}

std::string findEntryScript(const std::string& dirPath)
{
    auto dirPath_obj = std::filesystem::path(dirPath);

    std::filesystem::path packageFilePath = dirPath_obj / "package.json";
    if (!std::filesystem::exists(packageFilePath))
        return "";

    try {
        std::ifstream file(UTF82String(packageFilePath.make_preferred().u8string()));
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
            return UTF82String(entryPath.u8string());
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
        std::ifstream file(UTF82String(packageFilePath.make_preferred().u8string()));
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
        std::ifstream file(UTF82String(packageFilePath.make_preferred().u8string()));
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
#ifdef LLSE_BACKEND_NODEJS
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

        string executeJs = "const oldCwd = process.cwd();"
            "const publicRequire = require('module').createRequire(oldCwd + '/plugins/lib/');"
            "require('process').chdir('" + workingDir + "');"
            + "publicRequire('npm-js-interface')('" + cmd + "');"
            + "require('process').chdir(oldCwd);";

        try
        {
            node::SetProcessExitHandler(env, [&](node::Environment* env_, int exit_code) {
                node::Stop(env);
            });
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