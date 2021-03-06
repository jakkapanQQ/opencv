// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Copyright (C) 2020 Intel Corporation

#ifndef OPENCV_GAPI_VIDEO_TESTS_HPP
#define OPENCV_GAPI_VIDEO_TESTS_HPP

#include "gapi_video_tests_common.hpp"

namespace opencv_test
{
GAPI_TEST_FIXTURE_SPEC_PARAMS(OptFlowLKTest, FIXTURE_API(std::string,int,tuple<int,int>,int,
                                                         cv::TermCriteria),
                              5, fileNamePattern, channels, pointsNum, winSize, criteria)

GAPI_TEST_FIXTURE_SPEC_PARAMS(OptFlowLKTestForPyr, FIXTURE_API(std::string,int,tuple<int,int>,int,
                                                               cv::TermCriteria,bool),
                              6, fileNamePattern, channels, pointsNum, winSize, criteria,withDeriv)
} // opencv_test


#endif // OPENCV_GAPI_VIDEO_TESTS_HPP
