#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PackWriteStrategy {
public:
    // PackWriteStrategy inner types define
    enum class FileName : uchar {
        Manifest     = 0,
        ContentsJSON = 1,
        TexturesList = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackWriteStrategy() = default;

    virtual void writeAsset(::PackWriteStrategy::FileName, ::std::string const&) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Path getPath(::PackWriteStrategy::FileName path);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
