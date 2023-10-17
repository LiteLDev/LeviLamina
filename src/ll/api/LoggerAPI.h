////////////////////////////////////////////////////////////////////////
//  Logger System - Log text to console, file and player easily
//  - Created by RimuruChan on 2021/12/11.
//
//
//  [Create Logger]
//
//  Logger logger("MyPlugin");                  // Create a logger (default: only log to console)
//  logger.setFile("logs/MyPlugin.log");        // Optional, also record log to File
//
//  auto pl = mc.getPlayer("Jim");
//  if(pl)
//      logger.setPlayer(pl);                   // Optional, also record log to a Player
//  ......
//  logger.setFile(nullptr);                    // Stop record log to File (Passing nullptr to setPlayer works like
//  this)
//
//
//  [Use Logger]
//
//  logger.info("Infomation");                                  // Common
//  logger.error("Error! Code:{}",GetLastError());              // FMT Format
//  logger.warn << "Warning! Fail to do sth." << logger.endl;   // STL Format
//
////////////////////////////////////////////////////////////////////////

#pragma once

#include "ll/api/base/Concepts.h"
#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/utils/FileHelper.h"
#include "ll/api/utils/PluginOwnData.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinHelper.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <mutex>
#include <source_location>
#include <sstream>
#include <string>
#include <utility>

#include "FMT/chrono.h"
#include "FMT/color.h"
#include "FMT/core.h"
#include "FMT/os.h"
#include "FMT/printf.h"

#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"

class Logger {
public:
    class OutputStream {
        friend class Logger;

    private:
        LLAPI void print(std::string_view) const;

    public:
        using playerOutputFunc = std::function<void(std::string_view)>;

        Logger&                        logger;
        std::string                    levelPrefix;
        int                            level;
        std::array<fmt::text_style, 4> style;
        std::array<std::string, 5>     consoleFormat;
        std::array<std::string, 5>     fileFormat;
        std::array<std::string, 5>     playerFormat;
        playerOutputFunc               playerOutputCallback;

        LLAPI explicit OutputStream(
            Logger&                               logger,
            std::string                           levelPrefix,
            int                                   level,
            std::array<fmt::text_style, 4> const& style         = {{}},
            std::array<std::string, 5> const&     playerFormat  = {"<{2}|{1}> [{0}] {3}", "{:%T}", "{}", "{}", "{}"},
            std::array<std::string, 5> const&     consoleFormat = {"{0} {1} {2} {3}", "{:%T}", "{}", "[{}]", "{}"},
            std::array<std::string, 5> const&     fileFormat    = {"[{0} {1}][{2}] {3}", "{:%F %T}", "{}", "{}", "{}"}
        );

        template <ll::concepts::IsString S, typename... Args>
        void operator()(S const& fmt, Args const&... args) {
            if constexpr (0 == sizeof...(args)) {
                print(fmt);
            } else {
                print(fmt::format(fmt::runtime(fmt), args...));
            }
        }

        void setPlayerOutputFunc(playerOutputFunc const& func) { playerOutputCallback = func; }
    };

public:
    std::string                  title;
    std::optional<std::ofstream> ofs          = std::nullopt;
    int                          consoleLevel = -1;
    int                          fileLevel    = -1;
    int                          playerLevel  = -1;

    OutputStream debug;
    OutputStream info;
    OutputStream warn;
    OutputStream error;
    OutputStream fatal;

    LLAPI explicit Logger(std::string title = __builtin_FUNCTION());

    ~Logger() { resetFile(); }

    LLAPI void resetFile();
    LLAPI bool setFile(std::string const& logFile, bool appendMode = true);

    LLAPI static bool setDefaultFile(std::string const& logFile, bool appendMode);

    void setPlayerOutputFunc(OutputStream::playerOutputFunc&& func) {
        debug.setPlayerOutputFunc(func);
        info.setPlayerOutputFunc(func);
        warn.setPlayerOutputFunc(func);
        error.setPlayerOutputFunc(func);
        fatal.setPlayerOutputFunc(func);
    }

    std::ofstream& getFile() {
        if (ofs) { return ofs.value(); }
        return defaultFile;
    }

private:
    LLAPI static std::ofstream defaultFile;
};
