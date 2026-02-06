#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct PhotoRecord;
namespace Core { class Path; }
// clang-format on

struct PortfolioScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::vector<::Core::PathBuffer<::std::string>>)>> mSetScreenshots;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<bool(::std::string&, ::Core::Path const&)>)>>
                                                                                mSetImageMetaDataLoader;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                          mCallOpen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::PhotoRecord>&()>> mGetPhotoRecords;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                      mSaveCaptions;
    ::ll::TypedStorage<8, 64, ::std::function<::MinecraftScreenModel&()>>       mGetMinecraftScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<void(uint64)>>                    mDeletePhoto;
    ::ll::TypedStorage<8, 64, ::std::function<void(uint64)>>                    mCreatePhotoItem;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                          mLeaveScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenControllerProxyCallbacks& operator=(PortfolioScreenControllerProxyCallbacks const&);
    PortfolioScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PortfolioScreenControllerProxyCallbacks(::PortfolioScreenControllerProxyCallbacks const&);

    MCAPI ~PortfolioScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PortfolioScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
