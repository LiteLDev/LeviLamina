#include "Loader.hpp"
#include <LoggerAPI.h>
#include ".NETGlobal.hpp"

void LoadPlugins(std::vector<std::filesystem::path> const& assemblyPaths, Logger& logger)
{
    for (auto iter = assemblyPaths.begin(); iter != assemblyPaths.end(); ++iter)
    {
        try
        {
            Assembly::LoadFrom(
                marshalString(iter->string()))
                ->GetType(TEXT(LLNET_ENTRY_CLASS))
                ->GetMethod(TEXT(LLNET_ENTRY_METHOD))
                ->Invoke(nullptr, nullptr);
            logger.info("Plugin <{}> loaded", iter->filename().string());
        }
        catch (System::Exception^ ex)
        {
            logger.error("Uncaught System.Exception Detected!");
            logger.error("{}", marshalString(ex->Message));
        }
        catch (const std::exception& ex)
        {
            logger.error("Uncaught std::exception Detected!");
            logger.error("{}", ex.what());
        }
        catch (...)
        {
            logger.error("Uncaught exception Detected!");
        }
    }
}

#pragma unmanaged
#include "Global.hpp"
#include <Utils/Hash.h>

#pragma unmanaged
void CheekPluginEntry(std::vector<std::filesystem::path>& assemblyPaths, Logger& logger);

#pragma unmanaged
void LoadMain()
{
    Logger logger(LLNET_LOADER_NAME);
    logger.info("Loading plugins...");
    std::filesystem::directory_iterator files(LLNET_PLUGINS_LOAD_DIR);
    std::vector<std::filesystem::path> assemblies;
    for (auto& file : files)
    {
        auto& filePath = file.path();
        if (filePath.extension() == ".dll")
        {
            if (filePath.filename() == LLNET_LOADER_NAME_WITH_EXTENSION)
                continue;
            assemblies.emplace_back(filePath);
        }
    }

    CheekPluginEntry(assemblies, logger);

    LoadPlugins(assemblies, logger);
}

#pragma unmanaged
void CheekPluginEntry(std::vector<std::filesystem::path>& assemblyPaths, Logger& logger)
{
    PEHeader info;

    for (auto iter = assemblyPaths.begin(); iter != assemblyPaths.end();)
    {
        info.read(*iter);

        if (info.isDotNetAssembly())
        {
            auto dllFile = fopen(iter->string().c_str(), "r");
            if (dllFile != nullptr)
            {

                long pos = 0x0000049c;
                bool signal = false;
                char val = 0;
                char buffer[9]{0};

                fseek(dllFile, 0L, SEEK_END);
                auto end = ftell(dllFile);

                while (pos < end)
                {
                    fseek(dllFile, pos++, SEEK_SET);
                    val = fgetc(dllFile);

                    if (val != 0x4f)
                        continue;
                    else
                    {
                        fread(buffer, sizeof(char), 9, dllFile);

                        if (!bool(buffer[0] ^ 0x6e |
                                  buffer[1] ^ 0x50 |
                                  buffer[2] ^ 0x6f |
                                  buffer[3] ^ 0x73 |
                                  buffer[4] ^ 0x74 |
                                  buffer[5] ^ 0x49 |
                                  buffer[6] ^ 0x6e |
                                  buffer[7] ^ 0x69 |
                                  buffer[8] ^ 0x74))
                        {
                            signal = true;
                            break;
                        }
                    }
                }

                if (signal)
                    ++iter;
                else
                {
                    iter = assemblyPaths.erase(iter);
                    logger.warn("Cannot find plugin entry!   At <{}>", iter->filename().string());
                }
                fclose(dllFile);
            }
        }
        else
        {
            iter = assemblyPaths.erase(iter);
        }
    }
}