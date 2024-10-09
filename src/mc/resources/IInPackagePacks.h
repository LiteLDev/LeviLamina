#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class IInPackagePacks {
public:
    // IInPackagePacks inner types declare
    // clang-format off
    struct MetaData;
    // clang-format on

    // IInPackagePacks inner types define
    struct MetaData {
    public:
        // prevent constructor by default
        MetaData& operator=(MetaData const&);
        MetaData(MetaData const&);
        MetaData();

    public:
        // NOLINTBEGIN
        MCAPI MetaData(class Core::Path const& path, bool isHidden, ::PackCategory packCategory);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    IInPackagePacks& operator=(IInPackagePacks const&);
    IInPackagePacks(IInPackagePacks const&);
    IInPackagePacks();
};
