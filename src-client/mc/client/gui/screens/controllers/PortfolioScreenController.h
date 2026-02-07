#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
class PortfolioScreenManager;
struct PhotoRecord;
struct UIPropertyBag;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PortfolioScreenController : public ::ClientInstanceScreenController {
public:
    // PortfolioScreenController inner types define
    enum class PortfolioView : uchar {};

    using ImageMetaDataLoadorFunction = ::std::function<bool(::std::string&, ::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PortfolioScreenManager>>                 mPortfolioScreenManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>           mScreenshots;
    ::ll::TypedStorage<8, 24, ::std::vector<::PhotoRecord>>                               mPhotoRecords;
    ::ll::TypedStorage<1, 1, ::PortfolioScreenController::PortfolioView>                  mCurrentView;
    ::ll::TypedStorage<4, 4, int>                                                         mCurrentPage;
    ::ll::TypedStorage<4, 4, int>                                                         mLastPage;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ImageExportSubController>>                mImageExportSubController;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string&, ::Core::Path const&)>> mImageMetaDataLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortfolioScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PortfolioScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _addPhotoPage(::Core::PathBuffer<::std::string> const& photoPath);

    MCAPI void _buildPhotoRecords();

    MCAPI void _createPhotoItem(uint64 index);

    MCAPI void _deletePhoto(uint64 index);

    MCAPI int _getPickIndex(::UIPropertyBag& bag);

    MCAPI ::ui::ViewRequest _handlePortfolioExport();

    MCAPI void _initScreenControllerProxy();

    MCAPI void _loadCaptionIfUnloaded(::PhotoRecord& record);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _saveCaptions(bool forceSaveAll);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onTerminate();

    MCFOLD bool $_isStillValid() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
