#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourceLocation {

public:
    // prevent constructor by default
    ResourceLocation& operator=(ResourceLocation const&) = delete;
    ResourceLocation(ResourceLocation const&)            = delete;

public:
    /**
     * @symbol ??0ResourceLocation\@\@QEAA\@AEBVPath\@Core\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI ResourceLocation(class Core::Path const&, enum class ResourceFileSystem); // NOLINT
    /**
     * @symbol ??0ResourceLocation\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI ResourceLocation(class Core::Path const&); // NOLINT
    /**
     * @symbol ??0ResourceLocation\@\@QEAA\@XZ
     */
    MCAPI ResourceLocation(); // NOLINT
    /**
     * @symbol
     * ?getFullPath\@ResourceLocation\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFullPath() const; // NOLINT
    /**
     * @symbol
     * ?getRelativePath\@ResourceLocation\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getRelativePath() const; // NOLINT
    /**
     * @symbol ??8ResourceLocation\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ResourceLocation const&) const; // NOLINT
    /**
     * @symbol ?serialize\@ResourceLocation\@\@QEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value&) const; // NOLINT
    /**
     * @symbol
     * ?setRelativePath\@ResourceLocation\@\@QEAAXAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI void setRelativePath(class Core::PathBuffer<std::string> const&); // NOLINT
    /**
     * @symbol ??1ResourceLocation\@\@QEAA\@XZ
     */
    MCAPI ~ResourceLocation(); // NOLINT
    /**
     * @symbol ?getEmptyLocation\@ResourceLocation\@\@SAAEBV1\@XZ
     */
    MCAPI static class ResourceLocation const& getEmptyLocation(); // NOLINT

    // private:
    /**
     * @symbol ?_computeHashes\@ResourceLocation\@\@AEAAXXZ
     */
    MCAPI void _computeHashes(); // NOLINT

private:
};
