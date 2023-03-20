#pragma warning(disable : 4251)
#include "Configs.h"
#if defined(LLSE_BACKEND_PYTHON)
#include "Global.hpp"
#include <llapi/ScheduleAPI.h>
#include "Loader.h"
#include "api/EventAPI.h"
#include "api/CommandCompatibleAPI.h"
#include "api/CommandAPI.h"
#include "engine/RemoteCall.h"
#include <engine/TimeTaskSystem.h>
#include <llapi/LLAPI.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/utils/WinHelper.h>
#include "utils/Utils.h"
#include "PythonHelper.h"
#include "engine/EngineManager.h"
#include "engine/EngineOwnData.h"
#include <tomlplusplus/toml.hpp>
#include <Python.h>

#define PIP_EXECUTE_TIMEOUT 1800 * 1000

// pre-declare
extern void BindAPIs(ScriptEngine* engine);
extern Logger logger;
extern bool isInConsoleDebugMode;
extern ScriptEngine* debugEngine;


namespace PythonHelper {

bool pythonInited = false;

bool initPythonRuntime() {
    if(!pythonInited)
    {
        script::py_interop::setPythonHomePath(L".\\plugins\\lib\\python-env");
        script::py_interop::setModuleSearchPaths({
            L".\\plugins\\lib\\python-env\\python310.zip",
            L".\\plugins\\lib\\python-env\\DLLs",
            L".\\plugins\\lib\\python-env\\Lib",
            L".\\plugins\\lib\\python-env\\Lib\\site-packages",
        });
        pythonInited = true;
    }
    return true;
}

bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath, std::string pluginDirPath)
{
    // TODO: add import path to sys.path
    try {
        engine->loadFile(entryScriptPath);
    } 
    catch (const Exception& e1) {
        // Fail
        logger.error("Fail in Loading Script Plugin!\n");
        throw e1;
    }
    return true;
}

// Load Python plugin
// This function must be called in correct backend
bool loadPythonPlugin(std::string dirPath, const std::string& packagePath, bool isHotLoad) {
    // "dirPath" is public temp dir (LLSE_PLUGIN_PACKAGE_TEMP_DIR) or normal plugin dir
    // "packagePath" will point to plugin package path if isUncompressedFirstTime == true
    if (dirPath == LLSE_PLUGIN_PACKAGE_TEMP_DIR)
    {
        // Need to copy from temp dir to installed dir
        if (std::filesystem::exists(LLSE_PLUGIN_PACKAGE_TEMP_DIR "/pyproject.toml")) {
            auto pluginName = PythonHelper::getPluginPackageName(LLSE_PLUGIN_PACKAGE_TEMP_DIR);
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

    std::string entryPath = PythonHelper::findEntryScript(dirPath);
    if (entryPath.empty())
        return false;
    std::string pluginName = PythonHelper::getPluginPackageName(dirPath);

    // Run "pip install" if needed
    auto realPackageInstallDir = (filesystem::path(dirPath) / "site-packages").make_preferred();
    std::string realPackageInstallDirStr = UTF82String(realPackageInstallDir.u8string());
    if(!filesystem::exists(realPackageInstallDir))
    {
        std::string dependTmpFilePath = PythonHelper::getPluginPackDependencyFilePath(dirPath);
        if (!dependTmpFilePath.empty())
        {
            int exitCode = 0;
            logger.info(tr("llse.loader.python.executePipInstall.start",
                fmt::arg("name", UTF82String(filesystem::path(dirPath).filename().u8string()))));
            
            if ((exitCode = PythonHelper::executePipCommand("pip install -r \"" + dependTmpFilePath
                + "\" -t \"" + realPackageInstallDirStr + "\" --disable-pip-version-check")) == 0)
            {
                logger.info(tr("llse.loader.python.executePipInstall.success"));
            }
            else
                logger.error(tr("llse.loader.python.executePipInstall.fail", fmt::arg("code", exitCode)));
            
            // remove temp dependency file after installation
            std::error_code ec;
            std::filesystem::remove(std::filesystem::path(dependTmpFilePath), ec);
        }
    }

    // Create engine & Load plugin
    ScriptEngine* engine = nullptr;
    try {
        engine = EngineManager::newEngine();
        EngineScope enter(engine);

        // setData
        ENGINE_OWN_DATA()->pluginName = pluginName;
        ENGINE_OWN_DATA()->pluginFileOrDirPath = dirPath;
        ENGINE_OWN_DATA()->logger.title = pluginName;

        // add plugin-own site-packages & plugin source dir to sys.path
        string sourceDirFormatted = UTF82String(filesystem::path(dirPath).make_preferred().u8string());
        engine->eval("import sys as _llse_py_sys_module\n"
            "_llse_py_sys_module.path.insert(0, '" + realPackageInstallDirStr + "')\n"
            "_llse_py_sys_module.path.insert(0, '" + sourceDirFormatted + "')");

        // bindAPIs
        try {
            BindAPIs(engine);
        } catch (const Exception& e) {
            logger.error("Fail in Binding APIs!\n");
            throw;
        }

        // Load depend libs
        try {
            for (auto& [path, content] : depends) {
                if(!content.empty())
                    engine->eval(content, path);
            }
        } catch (const Exception& e) {
            logger.error("Fail in Loading Dependence Lib!\n");
            throw;
        }

        // Load script
        if (!PythonHelper::loadPluginCode(engine, entryPath, dirPath))
            throw "Uncaught exception thrown in code";

        if (!PluginManager::getPlugin(pluginName)) {
            // Plugin did't register itself. Help to register it
            string description = pluginName;
            ll::Version ver(1, 0, 0);
            std::map<string, string> others = {};

            // Read information from pyproject.toml
            try {
                std::filesystem::path packageFilePath = std::filesystem::path(dirPath) / "pyproject.toml";
                string packageFilePathStr = UTF82String(packageFilePath.make_preferred().u8string());
                
                toml::table configData = toml::parse_file(packageFilePathStr);
                auto projectNode = configData["project"];

                // description
                if(projectNode["description"])
                {
                    description = *(projectNode["description"].value<std::string>());
                }

                // version
                if(projectNode["version"])
                {
                    ver = ll::Version::parse(*(projectNode["version"].value<std::string>()));
                }

                // TODO: more information to read
            }
            catch (...)
            { }

            // register
            PluginManager::registerPlugin(dirPath, pluginName, description, ver, others);
        }

        // Call necessary events when at hot load
        if (isHotLoad)
            LLSECallEventsOnHotLoad(engine);

        // Success
        logger.info(tr("llse.loader.loadMain.loadedPlugin",
            fmt::arg("type", "Python"),
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

            LLSERemoveTimeTaskData(engine);
            LLSERemoveAllEventListeners(engine);
            LLSERemoveCmdRegister(engine);
            LLSERemoveCmdCallback(engine);
            LLSERemoveAllExportedFuncs(engine);

            engine->getData().reset();
            EngineManager::unRegisterEngine(engine);
        }
        if (engine) {
            engine->destroy();
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

    std::filesystem::path entryFilePath = dirPath_obj / "__init__.py";
    if (!std::filesystem::exists(entryFilePath))
        return "";
    else
        return UTF82String(entryFilePath.u8string());
}

std::string getPluginPackageName(const std::string& dirPath)
{
    auto dirPath_obj = std::filesystem::path(dirPath);

    std::filesystem::path packageFilePath = dirPath_obj / std::filesystem::path("pyproject.toml");
    if (!std::filesystem::exists(packageFilePath))
        return "";
    
    try {
        string packageFilePathStr = UTF82String(packageFilePath.make_preferred().u8string());
        toml::table configData = toml::parse_file(packageFilePathStr);
        auto projectNode = configData["project"];
        if(!projectNode["name"])
            return "";
        std::optional<std::string> packageName = projectNode["name"].value<std::string>();
        return packageName ? *packageName : "";
    }
    catch (...)
    {
        return "";
    }
}

std::string getPluginPackDependencyFilePath(const std::string& dirPath)
{
    auto dirPath_obj = std::filesystem::path(dirPath);
    std::filesystem::path packageFilePath = dirPath_obj / std::filesystem::path("pyproject.toml");
    std::filesystem::path requirementsFilePath = dirPath_obj / std::filesystem::path("requirements.txt");
    std::filesystem::path requirementsTmpFilePath 
        = dirPath_obj / std::filesystem::path("_requirements_llse_temp.txt");
    
    // if requirements.txt exists, copy a temp version
    if(std::filesystem::exists(requirementsFilePath))
    {
        std::error_code ec;
        std::filesystem::copy_file(requirementsFilePath, requirementsTmpFilePath, ec);
    }

    if (std::filesystem::exists(packageFilePath))
    {
        // copy dependencies from pyproject.toml to _requirements_llse_temp.txt
        std::string dependsAdded = "";
        try {
            string packageFilePathStr = UTF82String(packageFilePath.make_preferred().u8string());
            toml::table configData = toml::parse_file(packageFilePathStr);
            auto projectNode = configData["project"];
            if(projectNode["dependencies"])
            {
                toml::array* arr = projectNode["dependencies"].as_array();
                arr->for_each([&dependsAdded](toml::value<std::string>& elem)
                {
                    std::optional<std::string> depend = *elem;
                    dependsAdded += "\n" + *depend;
                });
            }
        }
        catch (...)
        { }

        if(!dependsAdded.empty())
        {
            std::ofstream fout(UTF82String(requirementsTmpFilePath.make_preferred().u8string()), std::ios::app);
            fout << dependsAdded;
            fout.close();
        }
    }

    if(std::filesystem::exists(requirementsTmpFilePath))
        return UTF82String(requirementsTmpFilePath.make_preferred().u8string());
    else
        return "";
}

#define OUTPUT_DEBUG_SIGN() std::cout << ">>> " << std::flush
#define OUTPUT_DEBUG_NEED_MORE_CODE_SIGN() std::cout << "... " << std::flush
std::string codeBuffer = "";
bool isInsideCodeBlock = false;

static PyObject* getPyGlobalDict() {
  PyObject* m = PyImport_AddModule("__main__");
  if (m == nullptr) {
    throw Exception("can't find __main__ module");
  }
  return PyModule_GetDict(m);
}

bool processPythonDebugEngine(const std::string &cmd)
{
    if (cmd == LLSE_DEBUG_CMD)
    {
        if (isInConsoleDebugMode)
        {
            //EndDebug
            logger.info("Debug mode ended");
            isInConsoleDebugMode = false;
        }
        else
        {
            //StartDebug
            logger.info("Debug mode begins");
            codeBuffer.clear();
            isInsideCodeBlock = false;
            isInConsoleDebugMode = true;
            OUTPUT_DEBUG_SIGN();
        }
        return false;
    }
    if (isInConsoleDebugMode)
    {
        EngineScope enter(debugEngine);
        if (cmd == "stop")
        {
            return true;
        }
        else
        {
            try {
                if(isInsideCodeBlock)
                {
                    // is in code block mode
                    if(cmd.empty())
                    {
                        // exit code block
                        isInsideCodeBlock = false;
                    }
                    else
                    {
                        // add a new line to buffer
                        codeBuffer += cmd + "\n";
                        OUTPUT_DEBUG_NEED_MORE_CODE_SIGN();
                        return false;
                    }
                }
                else
                {
                    // not in code block mode
                    if(EndsWith(cmd, ":"))
                    {
                        // begin code block mode
                        isInsideCodeBlock = true;
                        codeBuffer = cmd + "\n";
                        OUTPUT_DEBUG_NEED_MORE_CODE_SIGN();
                        return false;
                    }
                    else
                    {
                        codeBuffer = cmd;
                    }
                }

                PyRun_StringFlags(codeBuffer.c_str(), Py_single_input, getPyGlobalDict(), nullptr, nullptr);
                codeBuffer.clear();
                if(script::py_interop::hasException())
                {
                    auto exp = script::py_interop::getAndClearLastException();
                    throw exp;
                }
            } catch(const Exception &e) {
                isInsideCodeBlock = false;
                codeBuffer.clear();
                logger.error("Exception:\n" + e.stacktrace() + "\n" + e.message());
            }
        }
        OUTPUT_DEBUG_SIGN();
        return false;
    }
    return true;
}

bool processConsolePipCmd(const std::string& cmd)
{
#ifdef LLSE_BACKEND_PYTHON
    if (StartsWith(cmd, "pip "))
    {
        PythonHelper::executePipCommand(cmd);
        return false;
    }
    else
        return true;
#else
    return true;
#endif
}

// if no -t in cmd, packages will install to default global embedding site-package dir 
// (./plugins/lib/python-env/Lib/site-packages)
int executePipCommand(std::string cmd)
{
    if(cmd.find("--disable-pip-version-check") == std::string::npos)
        cmd += " --disable-pip-version-check";
    cmd =  ".\\plugins\\lib\\python-env\\python.exe -m " + cmd;  

    SECURITY_ATTRIBUTES sa;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.lpSecurityDescriptor = nullptr;
    sa.bInheritHandle = TRUE;

    STARTUPINFOW si = {0};
    PROCESS_INFORMATION pi;
    si.cb = sizeof(STARTUPINFO);
    GetStartupInfoW(&si);

    auto wCmd = str2cwstr(cmd);
    if (!CreateProcessW(nullptr, wCmd, nullptr, nullptr, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        delete [] wCmd;
        return -1;
    }
    CloseHandle(pi.hThread);

    if(WaitForSingleObject(pi.hProcess, PIP_EXECUTE_TIMEOUT) == WAIT_TIMEOUT)
        TerminateProcess(pi.hProcess, -1);

    DWORD exitCode = 0;
    GetExitCodeProcess(pi.hProcess, &exitCode);
    CloseHandle(pi.hProcess);
    delete [] wCmd;
    return exitCode;
}

} // namespace PythonHelper

#endif