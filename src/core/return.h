#ifndef RAPPAS_CPP_RETURN_H
#define RAPPAS_CPP_RETURN_H

using return_code_t = int;

enum return_code
{
    success        = 0,
    argument_error = 1,
    wrong_format   = 2,
    unknown_error  = 3,
    help           = 4
};

#endif