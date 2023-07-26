#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class LoadResultAny; }
namespace Puv { class ParserBase; }
namespace Puv { class Upgrader; }
// clang-format on

namespace Puv::internal {

class LoaderBase {

public:
    // prevent constructor by default
    LoaderBase& operator=(LoaderBase const&) = delete;
    LoaderBase(LoaderBase const&)            = delete;
    LoaderBase()                             = delete;

public:
    /**
     * @symbol
     * ?registerParser\@LoaderBase\@internal\@Puv\@\@QEAAXV?$unique_ptr\@VParserBase\@Puv\@\@U?$default_delete\@VParserBase\@Puv\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerParser(std::unique_ptr<class Puv::ParserBase>); // NOLINT
    /**
     * @symbol
     * ?registerUpgrader\@LoaderBase\@internal\@Puv\@\@QEAAXV?$unique_ptr\@VUpgrader\@Puv\@\@U?$default_delete\@VUpgrader\@Puv\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerUpgrader(std::unique_ptr<class Puv::Upgrader>); // NOLINT
    /**
     * @symbol ??1LoaderBase\@internal\@Puv\@\@QEAA\@XZ
     */
    MCAPI ~LoaderBase(); // NOLINT

    // protected:
    /**
     * @symbol
     * ?doLoad\@LoaderBase\@internal\@Puv\@\@IEBA?AVLoadResultAny\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Puv::LoadResultAny doLoad(std::string const&) const; // NOLINT

protected:
};

}; // namespace Puv::internal
