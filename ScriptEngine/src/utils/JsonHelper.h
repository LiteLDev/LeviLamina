#pragma once
#include <Nlohmann/json.hpp>
#include <Nlohmann/fifo_map.hpp>
#include <string>
#include <filesystem>
#include <llapi/utils/FileHelper.h>
#include <llapi/LoggerAPI.h>

using namespace nlohmann;
using namespace std;

extern Logger logger;

template<class Key, class T, class dummy_compare, class Allocator>
using workaround_fifo_map = fifo_map<Key, T, fifo_map_compare<Key>, Allocator>;
using fifo_json = basic_json<workaround_fifo_map>;

inline fifo_json CreateJson(const std::string& path, const std::string& defContent, bool allowComment = true)
{
    fifo_json jsonConf;
    if (!filesystem::exists(str2wstr(path)))
    {
        if (path.find('/') != std::string::npos) { // e.g. plugins/LiteLoader/LiteLoader.json
            std::size_t pos = path.find_last_of('/');
            if (pos != std::string::npos) {
                std::string dirPath = path.substr(0, pos);
                CreateDirs(dirPath);
            }
        } else if(path.find('\\') != std::string::npos) { // e.g. plugins\\LiteLoader\\LiteLoader.json
            std::size_t pos = path.find_last_of('\\');
            if (pos != std::string::npos) {
                std::string dirPath = path.substr(0, pos);
                CreateDirs(dirPath);
            }
        } else {
            logger.error("Fail in create json file!");
            logger.error("invalid path");
            jsonConf = fifo_json::object();
        }

        if (!defContent.empty())
        {
            try
            {
                jsonConf = fifo_json::parse(defContent, nullptr, true, allowComment);
            }
            catch (exception& e)
            {
                logger.error("Fail to parse default json content!");
                logger.error(TextEncoding::toUTF8(e.what()));
                jsonConf = fifo_json::object();
            }
        }
        else
        {
            jsonConf = fifo_json::object();
        }

        ofstream jsonFile(path);
        if (jsonFile.is_open() && !defContent.empty())
            jsonFile << jsonConf.dump(4);
        jsonFile.close();
    }
    else
    {
        //已存在
        auto jsonTexts = ReadAllFile(path);
        if (!jsonTexts)
        {
            jsonConf = fifo_json::object();
        }
        else
        {
            try
            {
                jsonConf = fifo_json::parse(*jsonTexts, nullptr, true, allowComment);
            }
            catch (exception& e)
            {
                logger.error("Fail to parse json content in file!");
                logger.error(TextEncoding::toUTF8(e.what()));
                jsonConf = fifo_json::object();
            }
        }

    }
    return jsonConf;
}