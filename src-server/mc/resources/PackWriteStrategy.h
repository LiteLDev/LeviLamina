#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackWriteStrategy {
public:
    // PackWriteStrategy inner types define
    enum class FileName : uchar {
        Manifest = 0,
        ContentsJSON = 1,
        TexturesList = 2,
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackWriteStrategy() = default;

    // vIndex: 1
    virtual void writeAsset(::PackWriteStrategy::FileName, ::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
