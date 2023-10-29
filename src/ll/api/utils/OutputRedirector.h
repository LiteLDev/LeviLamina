#include <functional>
#include <iostream>
#include <utility>

namespace ll::redirect {
struct StreamRedirector {
    StreamRedirector(const StreamRedirector&)            = delete;
    StreamRedirector& operator=(const StreamRedirector&) = delete;

    StreamRedirector(std::ostream& stream, std::streambuf* rdbuf) : stream(stream), rdbuf_old(stream.rdbuf()) {
        stream.set_rdbuf(rdbuf);
    }

    ~StreamRedirector() { stream.set_rdbuf(rdbuf_old); }

private:
    std::ostream&   stream;
    std::streambuf* rdbuf_old;
};

struct functionbuf : public std::streambuf {

    explicit functionbuf(std::function<void(std::string_view)> function) : function(std::move(function)) {
        setp(buffer, buffer + sizeof(buffer) - 1);
    }

private:
    char                                  buffer[1024]{};
    std::function<void(std::string_view)> function;

    int_type overflow(int_type c) override {
        if (!traits_type::eq_int_type(c, traits_type::eof())) {
            *this->pptr() = traits_type::to_char_type(c);
            pbump(1);
        }

        return sync() ? traits_type::not_eof(c) : traits_type::eof();
    }

    int_type sync() override {
        if (pbase() != pptr()) {
            function(std::string_view(pbase(), pptr()));

            setp(pbase(), epptr());
        }

        return 0;
    }
};

struct ofuncstream : private virtual functionbuf, public std::ostream {
    explicit ofuncstream(const std::function<void(std::string_view)>& function)
    : functionbuf(function),
      std::ostream(static_cast<std::streambuf*>(this)) {
        setf(std::ios_base::unitbuf);
    }
};
} // namespace ll::redirect