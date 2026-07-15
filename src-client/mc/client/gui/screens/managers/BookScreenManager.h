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
    MCAPI ::ItemStack const& _getBook();

    MCAPI ::ViewStatus _viewPage(::PageContent const& page);

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

    MCAPI void fireBookEditedEvent() const;

    MCAPI void fireBookExportEvent() const;

    MCAPI void firePageTurnSound(::std::string const& eventName, float volume, float pitch) const;

    MCAPI void fireSignedBookOpenedEvent(
        ::std::string const& author,
        ::std::string const& authorXUID,
        ::std::string const& playerXUID
    ) const;

    MCAPI ::std::string getPickPhotoInventoryName(int index);

    MCAPI ::std::string getPickPhotoName(int index);

    MCAPI ::Core::PathBuffer<::std::string> getScreenshotPath(::PageContent const& page);

    MCAPI ::std::string const& getSignedAuthor();

    MCAPI ::std::string const& getXUID();

    MCAPI bool lecternHasBook() const;

    MCAPI void populatePickPics(::std::vector<::PageContent> const& pages);

    MCAPI void startBookExport();

    MCAPI void swapPages(int page1Index, int page2Index);

    MCAPI void updateLectern(int page);

    MCAPI ~BookScreenManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
