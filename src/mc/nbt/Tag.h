#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput;
class IDataInput;
class PrintStream;

class Tag {
public:
    // Tag inner types define
    enum class Type : uchar {
        End       = 0x0,
        Byte      = 0x1,
        Short     = 0x2,
        Int       = 0x3,
        Int64     = 0x4,
        Float     = 0x5,
        Double    = 0x6,
        ByteArray = 0x7,
        String    = 0x8,
        List      = 0x9,
        Compound  = 0xA,
        IntArray  = 0xB,
    };


    template <typename T>
    T const* as_ptr() const {
        return dynamic_cast<T const*>(this);
    }
    template <typename T>
    T* as_ptr() {
        return dynamic_cast<T*>(this);
    }
    template <typename T>
    T const& as() const {
        auto* res = dynamic_cast<T const*>(this);
        if (res) {
            return *res;
        }
        throw std::runtime_error("Invalid Tag As");
    }
    template <typename T>
    T& as() {
        auto* res = dynamic_cast<T*>(this);
        if (res) {
            return *res;
        }
        throw std::runtime_error("Invalid Tag As");
    }

    LLNDAPI Tag&       operator[](size_t index);
    LLNDAPI Tag const& operator[](size_t index) const;

    LLNDAPI Tag&       operator[](std::string_view index);
    LLNDAPI Tag const& operator[](std::string_view index) const;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Tag@@UEAA@XZ
    virtual ~Tag();

    // vIndex: 1, symbol: ?deleteChildren@Tag@@UEAAXXZ
    virtual void deleteChildren();

    // vIndex: 2, symbol: ?write@Int64Tag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const = 0;

    // vIndex: 3, symbol: ?load@Int64Tag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&) = 0;

    // vIndex: 4, symbol: ?toString@Int64Tag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const = 0;

    // vIndex: 5, symbol: ?getId@Int64Tag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const = 0;

    // vIndex: 6, symbol: ?equals@Tag@@UEBA_NAEBV1@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 7, symbol: ?print@Tag@@UEBAXAEAVPrintStream@@@Z
    virtual void print(class PrintStream&) const;

    // vIndex: 8, symbol:
    // ?print@Tag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
    virtual void print(std::string const&, class PrintStream&) const;

    // vIndex: 9, symbol: ?copy@Int64Tag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const = 0;

    // vIndex: 10, symbol: ?hash@Int64Tag@@UEBA_KXZ
    virtual uint64 hash() const = 0;

    // symbol: ?getTagName@Tag@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@1@@Z
    MCAPI static std::string getTagName(::Tag::Type);

    // symbol: ?newTag@Tag@@SA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@W4Type@1@@Z
    MCAPI static std::unique_ptr<class Tag> newTag(::Tag::Type);

    // symbol:
    // ?readNamedTag@Tag@@SA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@AEAVIDataInput@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput&, std::string&);

    // symbol:
    // ?writeNamedTag@Tag@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV1@AEAVIDataOutput@@@Z
    MCAPI static void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);

    // symbol: ?NullString@Tag@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NullString;

    // NOLINTEND
};
