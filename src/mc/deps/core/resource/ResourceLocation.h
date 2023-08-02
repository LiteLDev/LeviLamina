#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/systems/ResourceFileSystem.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourceLocation {

public:
    ResourceFileSystem            mFileSystem; // this+0x0
    Core::PathBuffer<std::string> mPath;       // this+0x8
    uint64_t                      mPathHash;   // this+0x28
    uint64_t                      mFullHash;   // this+0x30

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ResourceLocation\@\@QEAA\@AEBVPath\@Core\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI ResourceLocation(class Core::Path const&, enum class ResourceFileSystem);
    /**
     * @symbol ??0ResourceLocation\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI ResourceLocation(class Core::Path const&);
    /**
     * @symbol ??0ResourceLocation\@\@QEAA\@XZ
     */
    MCAPI ResourceLocation();
    /**
     * @symbol
     * ?getFullPath\@ResourceLocation\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFullPath() const;
    /**
     * @symbol
     * ?getRelativePath\@ResourceLocation\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getRelativePath() const;
    /**
     * @symbol ??8ResourceLocation\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ResourceLocation const&) const;
    /**
     * @symbol ?serialize\@ResourceLocation\@\@QEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value&) const;
    /**
     * @symbol
     * ?setRelativePath\@ResourceLocation\@\@QEAAXAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI void setRelativePath(class Core::PathBuffer<std::string> const&);
    /**
     * @symbol ??1ResourceLocation\@\@QEAA\@XZ
     */
    MCAPI ~ResourceLocation();
    /**
     * @symbol ?getEmptyLocation\@ResourceLocation\@\@SAAEBV1\@XZ
     */
    MCAPI static class ResourceLocation const& getEmptyLocation();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_computeHashes\@ResourceLocation\@\@AEAAXXZ
     */
    MCAPI void _computeHashes();
    // NOLINTEND
};
