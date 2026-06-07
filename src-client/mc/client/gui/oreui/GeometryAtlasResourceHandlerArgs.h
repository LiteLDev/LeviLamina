#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class TemporaryTextureHolder; }
namespace GeometryAtlas { class IGeometryAtlas; }
namespace OreUI { class IItemHandleFactory; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

namespace OreUI {

struct GeometryAtlasResourceHandlerArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IItemHandleFactory>>            mHandleFactory;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IGeometryAtlas>>       mGeometryAtlas;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>> mLiveViewPublisher;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                       mTextureHolder;
    ::ll::TypedStorage<1, 1, ::OreUI::GeometryProtocolType>                             mType;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryAtlasResourceHandlerArgs& operator=(GeometryAtlasResourceHandlerArgs const&);
    GeometryAtlasResourceHandlerArgs(GeometryAtlasResourceHandlerArgs const&);
    GeometryAtlasResourceHandlerArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GeometryAtlasResourceHandlerArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
