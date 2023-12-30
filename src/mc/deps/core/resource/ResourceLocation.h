#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/entity/systems/common/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourceLocation {
public:
    // prevent constructor by default
    ResourceLocation& operator=(ResourceLocation const&);
    ResourceLocation(ResourceLocation const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ResourceLocation@@QEAA@XZ
    MCAPI ResourceLocation();

    // symbol: ??0ResourceLocation@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit ResourceLocation(class Core::Path const& path);

    // symbol: ??0ResourceLocation@@QEAA@AEBVPath@Core@@W4ResourceFileSystem@@@Z
    MCAPI ResourceLocation(class Core::Path const& path, enum ResourceFileSystem fileSystem);

    // symbol:
    // ?getFullPath@ResourceLocation@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getFullPath() const;

    // symbol:
    // ?getRelativePath@ResourceLocation@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> const& getRelativePath() const;

    // symbol: ?serialize@ResourceLocation@@QEBAXAEAVValue@Json@@@Z
    MCAPI void serialize(class Json::Value& out) const;

    // symbol:
    // ?setRelativePath@ResourceLocation@@QEAAXAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
    MCAPI void setRelativePath(class Core::PathBuffer<std::string> const& path);

    // symbol: ??1ResourceLocation@@QEAA@XZ
    MCAPI ~ResourceLocation();

    // symbol: ?getEmptyLocation@ResourceLocation@@SAAEBV1@XZ
    MCAPI static class ResourceLocation const& getEmptyLocation();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_computeHashes@ResourceLocation@@AEAAXXZ
    MCAPI void _computeHashes();

    // NOLINTEND
};
