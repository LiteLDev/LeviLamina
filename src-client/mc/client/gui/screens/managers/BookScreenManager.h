#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Player;
class ScreenContext;
struct JpegCommentWriter;
struct PageContent;
struct SyncedPhotoView;
// clang-format on

class BookScreenManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                         mPlayer;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>                      mLecternPos;
    ::ll::TypedStorage<4, 4, int>                                               mBookSlot;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                   mPacketSender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SyncedPhotoView>>              mPhotoView;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mPickPictures;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mPickPicturesInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mExportFiles;
    ::ll::TypedStorage<8, 8, uint64>                                            mCurExportPage;
    ::ll::TypedStorage<8, 8, uint64>                                            mPhotoItemsLimitPage;
    ::ll::TypedStorage<1, 1, bool>                                              mEdited;
    ::ll::TypedStorage<1, 1, bool>                                              mIsEdu;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenManager& operator=(BookScreenManager const&);
    BookScreenManager(BookScreenManager const&);
    BookScreenManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Core::PathBuffer<::std::string> _getExportTempDir();

    MCAPI void addPageAt(int index, ::PageContent const& page);

    MCAPI float buildExportFiles(
        ::std::vector<::PageContent> const&                  pages,
        ::ScreenContext&                                     context,
        ::JpegCommentWriter&                                 writer,
        ::std::function<::std::string(::std::string const&)> profanityFilter
    );

    MCAPI void deletePage(int index);

    MCAPI void editPage(int index, ::PageContent const& page);

    MCAPI bool finalizeBook(::std::string const& title, ::std::string const& author, ::std::string const& authorXUID);

    MCAPI ::Core::PathBuffer<::std::string> getScreenshotPath(::PageContent const& page);

    MCAPI ::std::string const& getSignedAuthor();

    MCAPI void populatePickPics(::std::vector<::PageContent> const& pages);

    MCAPI void startBookExport();

    MCAPI void swapPages(int page1Index, int page2Index);

    MCAPI float tickBookDownload(::std::vector<::PageContent> const& pages);

    MCAPI void updateLectern(int page);
    // NOLINTEND
};
