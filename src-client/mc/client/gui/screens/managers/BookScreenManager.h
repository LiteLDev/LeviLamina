#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ViewStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class JpegCommentWriter;
class PacketSender;
class Player;
class ScreenContext;
class SyncedPhotoView;
struct PageContent;
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
    ::ll::TypedStorage<1, 1, bool>                                              hasExportedFirstPhoto;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenManager& operator=(BookScreenManager const&);
    BookScreenManager(BookScreenManager const&);
    BookScreenManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& _getBook();

    MCNAPI ::Core::PathBuffer<::std::string> _getExportTempDir();

    MCNAPI ::ViewStatus _viewPage(::PageContent const& page);

    MCNAPI void addPageAt(int index, ::PageContent const& page);

    MCNAPI float buildExportFiles(
        ::std::vector<::PageContent> const&                  pages,
        ::ScreenContext&                                     context,
        ::JpegCommentWriter&                                 writer,
        ::std::function<::std::string(::std::string const&)> profanityFilter
    );

    MCNAPI void deletePage(int index);

    MCNAPI void editPage(int index, ::PageContent const& page);

    MCNAPI bool finalizeBook(::std::string const& title, ::std::string const& author, ::std::string const& authorXUID);

    MCNAPI void fireBookEditedEvent() const;

    MCNAPI void fireBookExportEvent() const;

    MCNAPI void firePageTurnSound(::std::string const& eventName, float volume, float pitch) const;

    MCNAPI void fireSignedBookOpenedEvent(
        ::std::string const& author,
        ::std::string const& authorXUID,
        ::std::string const& playerXUID
    ) const;

    MCNAPI int getLecternBookPage() const;

    MCNAPI ::std::string getPickPhotoInventoryName(int index);

    MCNAPI ::std::string getPickPhotoName(int index);

    MCNAPI ::Core::PathBuffer<::std::string> getScreenshotPath(::PageContent const& page);

    MCNAPI bool lecternHasBook() const;

    MCNAPI bool lecternIsValid() const;

    MCNAPI void populatePickPics(::std::vector<::PageContent> const& pages);

    MCNAPI void startBookExport();

    MCNAPI void swapPages(int page1Index, int page2Index);

    MCNAPI void updateLectern(int page);

    MCNAPI ~BookScreenManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
