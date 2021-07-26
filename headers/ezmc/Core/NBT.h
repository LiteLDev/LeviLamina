#pragma once
#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <variant>
#include <vector>

#include "../FakeGSL/string_span.h"
#include "../dll.h"

class IDataInput;
class IDataOutput;
class PrintStream;

struct TagMemoryChunk {
    size_t                           m_cap, m_size;
    std::unique_ptr<unsigned char[]> m_data;

    template <typename T>
    MCAPI T*             alloc(unsigned long);
    MCAPI TagMemoryChunk copy() const;
    MCAPI bool           operator!=(TagMemoryChunk const&) const;
    inline size_t        size() const {
        return m_size;
    }
};

class MCAPI Tag {
public:
    enum Type {
        End       = 0,
        Byte      = 1,
        Short     = 2,
        Int       = 3,
        Int64     = 4,
        Float     = 5,
        Double    = 6,
        ByteArray = 7,
        String    = 8,
        List      = 9,
        Compound  = 10,
    };
    virtual ~Tag();
    virtual void                 deleteChildren();
    virtual void                 write(IDataOutput&) const = 0;
    virtual void                 load(IDataInput&)         = 0;
    virtual std::string          toString() const          = 0;
    virtual Tag::Type            getId() const             = 0;
    virtual bool                 equals(Tag const&) const;
    virtual void                 print(PrintStream&) const;
    virtual void                 print(std::string const&, PrintStream&) const;
    virtual std::unique_ptr<Tag> copy() const;
    virtual std::uint64_t        hash() const;

protected:
    Tag();
};

class MCAPI EndTag : public Tag {
public:
    virtual ~EndTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 0
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI ByteTag : public Tag {
public:
    unsigned char value;

    ByteTag();
    ByteTag(unsigned char);
    virtual ~ByteTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 1
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI ShortTag : public Tag {
public:
    short value;

    ShortTag(short);
    virtual ~ShortTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 2
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI IntTag : public Tag {
public:
    int32_t value;

    IntTag(int);
    virtual ~IntTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 3
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI Int64Tag : public Tag {
public:
    int64_t value;

    Int64Tag();
    Int64Tag(__int64);
    virtual ~Int64Tag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 4
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI FloatTag : public Tag {
public:
    float value;

    FloatTag();
    virtual ~FloatTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 5
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI DoubleTag : public Tag {
public:
    double value;

    DoubleTag();
    virtual ~DoubleTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 6
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI ByteArrayTag : public Tag {
public:
    TagMemoryChunk value;

    ByteArrayTag();
    virtual ~ByteArrayTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 7
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI StringTag : public Tag {
public:
    std::string value;

    StringTag(std::string);
    virtual ~StringTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 8
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI ListTag : public Tag {
public:
    std::vector<std::unique_ptr<Tag>> value;

    ListTag();
    virtual ~ListTag() override;
    virtual void                 deleteChildren() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 9
    virtual bool                 equals(Tag const&) const override;
    virtual void                 print(std::string const&, PrintStream&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;

    class CompoundTag const* getCompound(unsigned __int64) const;

    std::string const& getString(int) const;
    void               add(std::unique_ptr<Tag>);
    double             getDouble(int) const;
    float              getFloat(int) const;
    int                getInt(int) const;
};

class MCAPI IntArrayTag : public Tag {
public:
    TagMemoryChunk value;

    IntArrayTag();
    virtual ~IntArrayTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 11
    virtual bool                 equals(Tag const&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;
};

class MCAPI CompoundTag : public Tag {
public:
    std::map<std::string, class CompoundTagVariant> value;

    CompoundTag();
    CompoundTag(CompoundTag&&);
    virtual ~CompoundTag() override;
    virtual void                 write(IDataOutput&) const override;
    virtual void                 load(IDataInput&) override;
    virtual std::string          toString() const override;
    virtual Tag::Type            getId() const override; // 10
    virtual bool                 equals(Tag const&) const override;
    virtual void                 print(std::string const&, PrintStream&) const override;
    virtual std::unique_ptr<Tag> copy() const override;
    virtual std::uint64_t        hash() const override;

    bool contains(gsl::cstring_span<>, enum Tag::Type) const;
    bool contains(gsl::cstring_span<>) const;

    bool remove(gsl::cstring_span<>);

    void append(CompoundTag const&);

    Tag*           put(std::string, std::unique_ptr<Tag>);
    CompoundTag*   putCompound(std::string, std::unique_ptr<CompoundTag>);
    CompoundTag&   putCompound(std::string, CompoundTag);
    std::string&   putString(std::string, std::string);
    void           putBoolean(std::string, bool);
    unsigned char& putByte(std::string, unsigned char);
    int&           putInt(std::string, int);
    int64_t&       putInt64(std::string, int64_t);
    short&         putShort(std::string, short);
    float&         putFloat(std::string, float);

    std::string const&           getString(gsl::cstring_span<>) const;
    struct TagMemoryChunk const& getByteArray(gsl::cstring_span<>) const;
    ListTag const*               getList(gsl::cstring_span<>) const;
    ListTag*                     getList(gsl::cstring_span<>);
    CompoundTag const*           getCompound(gsl::cstring_span<>) const;
    CompoundTag*                 getCompound(gsl::cstring_span<>);
    bool                         getBoolean(gsl::cstring_span<>) const;
    int64_t                      getInt64(gsl::cstring_span<>) const;
    short                        getShort(gsl::cstring_span<>) const;
    float                        getFloat(gsl::cstring_span<>) const;
    unsigned char                getByte(gsl::cstring_span<>) const;
    int                          getInt(gsl::cstring_span<>) const;

    void                         deepCopy(CompoundTag const&);
    std::unique_ptr<CompoundTag> clone(void) const;
};

class CompoundTagVariant : std::variant<
                               EndTag, ByteTag, ShortTag, IntTag, Int64Tag, FloatTag, DoubleTag, ByteArrayTag,
                               StringTag, ListTag, CompoundTag, IntArrayTag> {

    using std::variant<
        EndTag, ByteTag, ShortTag, IntTag, Int64Tag, FloatTag, DoubleTag, ByteArrayTag, StringTag, ListTag, CompoundTag,
        IntArrayTag>::variant;
};