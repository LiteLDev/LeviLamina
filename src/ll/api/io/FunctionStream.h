#pragma once

#include <functional>
#include <iostream>
#include <utility>

namespace ll::io {

template <class Char, class Traits = std::char_traits<Char>>
struct basic_functionbuf;

template <class Char, class Traits = std::char_traits<Char>>
struct basic_ofuncstream;

using ofuncstream  = basic_ofuncstream<char>;
using functionbuf  = basic_functionbuf<char>;
using wofuncstream = basic_ofuncstream<wchar_t>;
using wfunctionbuf = basic_functionbuf<wchar_t>;

template <class Char, class Traits>
struct basic_functionbuf : public std::basic_streambuf<Char, Traits> {

    using base     = std::basic_streambuf<Char, Traits>;
    using view     = std::basic_string_view<Char>;
    using int_type = typename Traits::int_type;

    explicit basic_functionbuf(std::function<void(view)> const& function) : function(std::move(function)) {
        this->setp(buffer, buffer + sizeof(buffer) - 1);
    }


private:
    Char buffer[4096]{};

    std::function<void(view)> function;

    int_type overflow(int_type c) override {
        if (!Traits::eq_int_type(c, Traits::eof())) {
            *this->pptr() = Traits::to_char_type(c);
            this->pbump(1);
        }
        return sync() ? Traits::not_eof(c) : Traits::eof();
    }

    int_type sync() override {
        if (this->pbase() != this->pptr()) {
            function(view(this->pbase(), this->pptr()));
            this->setp(this->pbase(), this->epptr());
        }
        return 0;
    }
};

template <class Char, class Traits>
struct basic_ofuncstream : private virtual basic_functionbuf<Char, Traits>, public std::basic_ostream<Char, Traits> {

    using view = typename basic_functionbuf<Char, Traits>::view;

    explicit basic_ofuncstream(std::function<void(view)> const& function)
    : basic_functionbuf<Char, Traits>(std::move(function)),
      std::basic_ostream<Char, Traits>(this) {
        this->setf(std::ios_base::unitbuf);
    }
};
} // namespace ll::io
