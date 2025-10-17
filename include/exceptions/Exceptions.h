//
// Created by Никита Комков on 04.10.2025.
//

#ifndef CARGO_AND_CRANS_EXCEPTIONS_H
#define CARGO_AND_CRANS_EXCEPTIONS_H

#include<exception>
#include<string>

class ErrorCrans : public std::exception {
public:
    ErrorCrans(std::string error) : error_(error) {}
    std::string what(){
        return error_;
    }

private:
    std::string error_;
};

#endif //CARGO_AND_CRANS_EXCEPTIONS_H
