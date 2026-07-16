#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
class PortfolioScreenManager;
struct PhotoRecord;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PortfolioScreenController : public ::ClientInstanceScreenController {
public:
    // PortfolioScreenController inner types define
    enum class PortfolioView : uchar {
        Viewing   = 0,
        Picking   = 1,
        Exporting = 2,
    };

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
    virtual ~PortfolioScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PortfolioScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
