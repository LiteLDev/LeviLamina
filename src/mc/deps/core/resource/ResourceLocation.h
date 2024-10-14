#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourceLocation {
public:
    ResourceFileSystem            mFileSystem; // this+0x0
    Core::PathBuffer<std::string> mPath;       // this+0x8
    uint64                        mPathHash;   // this+0x28
    uint64                        mFullHash;   // this+0x30

public:
    // NOLINTBEGIN
    MCAPI ResourceLocation();

    MCAPI explicit ResourceLocation(class Core::Path const& path);

    MCAPI ResourceLocation(class Core::Path const& path, ::ResourceFileSystem fileSystem);

    MCAPI class Core::PathBuffer<std::string> getFullPath() const;

    MCAPI class Core::PathBuffer<std::string> const& getRelativePath() const;

    MCAPI void serialize(class Json::Value& out) const;

    MCAPI void setRelativePath(class Core::PathBuffer<std::string> const& path);

    MCAPI ~ResourceLocation();

    MCAPI static class ResourceLocation const& getEmptyLocation();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _computeHashes();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
