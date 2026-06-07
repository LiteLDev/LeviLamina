#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactory;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GridComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::ivec2>                                   mDimensions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>>                mGridItemTemplate;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControlFactory>>           mControlFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mGridDimensionBinding;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCollectionName;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>                          mGridRescalingType;
    ::ll::TypedStorage<1, 1, ::ui::OrientationType>                          mGridFillDirection;
    ::ll::TypedStorage<4, 4, int>                                            mMaximumGridItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mCachedControls;
    ::ll::TypedStorage<1, 1, bool>                                           mLowMemoryMode;
    ::ll::TypedStorage<4, 4, int>                                            mPartialCreationStartIndex;
    ::ll::TypedStorage<4, 4, int>                                            mPartialCreationEndIndex;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(uint64), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    GridComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void onNotifyChildAdded() /*override*/;

    virtual void onNotifyChildRemoved() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GridComponent(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);

    MCAPI void _assignStaticGridItemIndexes();

    MCAPI void _cacheGridItemControlAt(::UIControl& owner, uint64 const& index);

    MCAPI void _createGridItemAt(int index);

    MCAPI void _reconstructGridItem(::UIControl& gridItem, int gridItemIndex);

    MCAPI ::std::pair<int, int> getClippedCollectionRange() const;

    MCFOLD ::std::string const& getCollectionName() const;

    MCAPI int getExpectedSize() const;

    MCFOLD ::glm::ivec2 const& getGridDimensions() const;

    MCAPI ::ui::OrientationType const& getGridFillDirection() const;

    MCFOLD ::std::shared_ptr<::UIControl> getGridItemTemplate() const;

    MCFOLD ::ui::OrientationType const& getGridRescalingType() const;

    MCFOLD int getMaximumGridItems() const;

    MCAPI bool getNeedsRescaling() const;

    MCFOLD bool isDynamic() const;

    MCAPI bool partiallyCreateGridItems(int startIndex, int endIndex);

    MCAPI void reassignGridPositions();

    MCAPI void refreshGridItems();

    MCFOLD ::Bedrock::PubSub::Subscription registerGridCompletionListener(::std::function<void(uint64)> callback);

    MCFOLD void setCollectionName(::std::string const& collectionName);

    MCFOLD void setGridDimensionBinding(::std::string const& binding);

    MCAPI void setGridDimensions(::glm::ivec2 const& dimensions);

    MCAPI void setGridFillDirection(::ui::OrientationType const& val);

    MCAPI void setGridItemTemplate(::std::shared_ptr<::UIControl> gridItemTemplate);

    MCAPI void setGridRescalingType(::ui::OrientationType const& val);

    MCFOLD void setLowMemoryMode(bool lowMemoryMode);

    MCAPI void setMaximumGridItems(int val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCFOLD void $onNotifyChildAdded();

    MCFOLD void $onNotifyChildRemoved();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
