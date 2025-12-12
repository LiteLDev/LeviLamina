#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StoreUIComponent;
namespace Json { class Value; }
struct MainMenuScreenModel;
struct StoreDataDrivenScreenController;
// clang-format on

class StoreVisualStyle {
public:
    // StoreVisualStyle inner types declare
    // clang-format off
    struct StyleInfo;
    // clang-format on

    // StoreVisualStyle inner types define
    struct StyleInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkc70f01;
        ::ll::UntypedStorage<8, 32> mUnkf0efe5;
        // NOLINTEND

    public:
        // prevent constructor by default
        StyleInfo& operator=(StyleInfo const&);
        StyleInfo(StyleInfo const&);
        StyleInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2cf851;
    ::ll::UntypedStorage<8, 8>  mUnk65bb4d;
    ::ll::UntypedStorage<8, 8>  mUnkf062f0;
    ::ll::UntypedStorage<8, 24> mUnkc17b82;
    ::ll::UntypedStorage<8, 32> mUnkc0f3a6;
    ::ll::UntypedStorage<8, 24> mUnk93560a;
    ::ll::UntypedStorage<4, 4>  mUnkd3463e;
    ::ll::UntypedStorage<4, 4>  mUnk120e2b;
    ::ll::UntypedStorage<4, 4>  mUnkae84b3;
    ::ll::UntypedStorage<8, 8>  mUnkeb8a31;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreVisualStyle& operator=(StoreVisualStyle const&);
    StoreVisualStyle(StoreVisualStyle const&);
    StoreVisualStyle();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StoreVisualStyle() = default;
#else // LL_PLAT_C
    virtual ~StoreVisualStyle();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _addComponent(ushort id, ::std::shared_ptr<::StoreUIComponent> newComp);

    MCNAPI_C void _addStyleSpecificComponents(::std::shared_ptr<::MainMenuScreenModel> model);

    MCNAPI_C void _parseComponentData(::std::shared_ptr<::MainMenuScreenModel> model, ::Json::Value const& sectionJson);

    MCNAPI_C void _parseQueryInfo(::Json::Value const& customObject);

    MCNAPI_C void _parseStyleData(::std::shared_ptr<::MainMenuScreenModel> model, ::Json::Value const& styleJson);

    MCNAPI_C void _removeItemOrderDuplicates();

    MCNAPI_C void addComponentDependancies();

    MCNAPI_C ::std::string const& getVisualStyleHeader() const;

    MCNAPI_C void initialize(::StoreDataDrivenScreenController& controller);

    MCNAPI_C void parseCustom(::std::shared_ptr<::MainMenuScreenModel> model, ::Json::Value const& customObject);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::string const& HERO_ROW();

    MCNAPI_C static ::std::string const& HERO_ROW_L2();

    MCNAPI_C static ::std::string const& SINGLE_PAGE_ROW();

    MCNAPI_C static ::std::string const& STORE_ROW();

    MCNAPI_C static ::std::unordered_map<
        ::std::string,
        ::std::function<void(::StoreVisualStyle&, ::std::shared_ptr<::MainMenuScreenModel>, ::Json::Value const&)>>&
    mAddComponentStrMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
