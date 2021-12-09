#include "MC/BinaryStream.hpp"
#include "MC/Packet.hpp"

template <int pid, bool batching = true, bool compress = true>
class NetworkPacket : public Packet {
public:
    string_view view;
    NetworkPacket() {
        incompressible = compress;
    }
    NetworkPacket(string_view sv)
        : view(sv) {
        incompressible = compress;
    }
    inline virtual ~NetworkPacket() {
    }

    virtual int getId() const {
        return pid;
    }
    virtual std::string getName() const {
        return "MyPkt";
    }
    virtual void write(BinaryStream& bs) const {
        bs.getRaw().append(view);
    }
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&) {
        throw("TODO in MyPkt::_read()");
        return 0;
    }
    virtual void dummyread() {
        throw("TODO in MyPkt::dummyread()");
    }
    virtual bool disallowBatching() const {
        return !batching;
    }
};