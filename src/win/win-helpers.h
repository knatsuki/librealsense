// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2015 Intel Corporation. All Rights Reserved.
#pragma once

#include <string>
#include <vector>

#include <windows.h>

namespace rsimpl
{
    namespace uvc
    {
        void check(const char * call, HRESULT hr);
#define CHECK_HR(x) check(#x, x);

        std::string win_to_utf(const WCHAR * s);

        std::vector<std::string> tokenize(std::string string, char separator);

        bool parse_usb_path(int & vid, int & pid, int & mi, std::string & unique_id, const std::string & path);

        std::string get_usb_port_id(int device_vid, int device_pid, const std::string& device_uid);
    }
}