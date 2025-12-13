#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/store/servicecomponent/StoreUIComponentWithStaticBinding.h"

// auto generated forward declare list
// clang-format off
class StoreVisualStyle;
struct MainMenuScreenModel;
namespace Json { class Value; }
namespace catalog { struct ICatalogImageResourceManager; }
namespace catalog { struct ImageInfo; }
// clang-format on

class TextureComponent : public ::StoreUIComponentWithStaticBinding<::TextureComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::catalog::ICatalogImageResourceManager>> mImageResourceManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::catalog::ImageInfo>>                    mImageInfo;
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureComponent() /*override*/ = default;

    virtual void tick(::ui::DirtyFlag&) /*override*/;

    virtual void _parseData(::Json::Value const& compJson) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureComponent(::StoreVisualStyle& owner, ::std::shared_ptr<::MainMenuScreenModel> model);

    MCNAPI ::std::string getTextureFileSystemName() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StoreVisualStyle& owner, ::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_parseData(::Json::Value const& compJson);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
