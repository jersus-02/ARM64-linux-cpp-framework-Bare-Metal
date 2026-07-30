#ifndef STRING_HPP
#define STRING_HPP
class string;
namespace string_necessities {
    class chptr {
        private:
        char arData[4100] = {0};
        const char* data = arData;
        public:
        friend class string;
    };
}

#endif //STRING_HPP