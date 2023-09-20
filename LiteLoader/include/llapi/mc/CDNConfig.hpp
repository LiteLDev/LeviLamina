/**
 * @file  CDNConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CDNConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CDNCONFIG
public:
    class CDNConfig& operator=(class CDNConfig const &) = delete;
    CDNConfig(class CDNConfig const &) = delete;
    CDNConfig() = delete;
#endif

public:
    /**
     * @symbol ??0CDNConfig\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI CDNConfig(class Core::Path const &);
    /**
     * @symbol ?getCDNUrls\@CDNConfig\@\@QEAA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<std::string, std::string>> getCDNUrls();

//private:
    /**
     * @symbol ?_readConfigFile\@CDNConfig\@\@AEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void _readConfigFile(class Core::Path const &);

private:

};
