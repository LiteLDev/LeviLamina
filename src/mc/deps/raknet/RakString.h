#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class RakString {
public:
    // RakString inner types declare
    // clang-format off
    struct SharedString;
    // clang-format on

    // RakString inner types define
    struct SharedString {

    public:
        // prevent constructor by default
        SharedString& operator=(SharedString const&) = delete;
        SharedString(SharedString const&)            = delete;
        SharedString()                               = delete;
    };

public:
    // prevent constructor by default
    RakString& operator=(RakString const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?Deserialize\@RakString\@RakNet\@\@QEAA_NPEAVBitStream\@2\@\@Z
     */
    MCAPI bool Deserialize(class RakNet::BitStream*);
    /**
     * @symbol ?FreeMemoryNoMutex\@RakString\@RakNet\@\@SAXXZ
     */
    MCAPI static void FreeMemoryNoMutex();
    /**
     * @symbol ?GetLength\@RakString\@RakNet\@\@QEBA_KXZ
     */
    MCAPI uint64_t GetLength() const;
    /**
     * @symbol ?IsEmpty\@RakString\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsEmpty() const;
    /**
     * @symbol ??0RakString\@RakNet\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI RakString(class RakNet::RakString const&);
    /**
     * @symbol ??0RakString\@RakNet\@\@QEAA\@PEBDZZ
     */
    MCAPI RakString(char const*, ...);
    /**
     * @symbol ??0RakString\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakString();
    /**
     * @symbol ??4RakString\@RakNet\@\@QEAAAEAV01\@PEBD\@Z
     */
    MCAPI class RakNet::RakString& operator=(char const*);
    /**
     * @symbol ??4RakString\@RakNet\@\@QEAAAEAV01\@PEAD\@Z
     */
    MCAPI class RakNet::RakString& operator=(char*);
    /**
     * @symbol ??8RakString\@RakNet\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class RakNet::RakString const&) const;
    /**
     * @symbol ??1RakString\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~RakString();
    /**
     * @symbol ?emptyString\@RakString\@RakNet\@\@2USharedString\@12\@A
     */
    MCAPI static struct RakNet::RakString::SharedString emptyString;
    /**
     * @symbol ?freeList\@RakString\@RakNet\@\@2V?$List\@PEAUSharedString\@RakString\@RakNet\@\@\@DataStructures\@\@A
     */
    MCAPI static class DataStructures::List<struct RakNet::RakString::SharedString*> freeList;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?Allocate\@RakString\@RakNet\@\@IEAAX_K\@Z
     */
    MCAPI void Allocate(uint64_t);
    /**
     * @symbol ?Assign\@RakString\@RakNet\@\@IEAAXPEBDPEAD\@Z
     */
    MCAPI void Assign(char const*, char*);
    /**
     * @symbol ?Assign\@RakString\@RakNet\@\@IEAAXPEBD\@Z
     */
    MCAPI void Assign(char const*);
    /**
     * @symbol ?Free\@RakString\@RakNet\@\@IEAAXXZ
     */
    MCAPI void Free();
    // NOLINTEND
};

}; // namespace RakNet
