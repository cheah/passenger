/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2017 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

/*
 * DirConfig/AutoGeneratedCreateFunction.cpp is automatically generated from DirConfig/AutoGeneratedCreateFunction.cpp.cxxcodebuilder,
 * using definitions from src/ruby_supportlib/phusion_passenger/apache2/config_options.rb.
 * Edits to DirConfig/AutoGeneratedCreateFunction.cpp will be lost.
 *
 * To update DirConfig/AutoGeneratedCreateFunction.cpp:
 *   rake apache2
 *
 * To force regeneration of DirConfig/AutoGeneratedCreateFunction.cpp:
 *   rm -f src/apache2_module/DirConfig/AutoGeneratedCreateFunction.cpp
 *   rake src/apache2_module/DirConfig/AutoGeneratedCreateFunction.cpp
 */

namespace Passenger {
namespace Apache2Module {

static void
createDirConfig_autoGenerated(DirConfig *config) {
	config->mAllowEncodedSlashes = Apache2Module::UNSET;
	/*
	 * config->mAppEnv: default initialized
	 */
	/*
	 * config->mAppGroupName: default initialized
	 */
	/*
	 * config->mAppRoot: default initialized
	 */
	/*
	 * config->mAppType: default initialized
	 */
	/*
	 * config->mBaseURIs: default initialized
	 */
	config->mBufferResponse = Apache2Module::UNSET;
	config->mBufferUpload = Apache2Module::UNSET;
	config->mEnabled = Apache2Module::UNSET;
	config->mErrorOverride = Apache2Module::UNSET;
	config->mForceMaxConcurrentRequestsPerProcess = UNSET_INT_VALUE;
	config->mFriendlyErrorPages = Apache2Module::UNSET;
	/*
	 * config->mGroup: default initialized
	 */
	config->mHighPerformance = Apache2Module::UNSET;
	config->mLoadShellEnvvars = Apache2Module::UNSET;
	config->mLveMinUid = UNSET_INT_VALUE;
	config->mMaxPreloaderIdleTime = UNSET_INT_VALUE;
	config->mMaxRequestQueueSize = UNSET_INT_VALUE;
	config->mMaxRequests = UNSET_INT_VALUE;
	/*
	 * config->mMeteorAppSettings: default initialized
	 */
	config->mMinInstances = UNSET_INT_VALUE;
	/*
	 * config->mMonitorLogFile: default initialized
	 */
	/*
	 * config->mNodejs: default initialized
	 */
	/*
	 * config->mPython: default initialized
	 */
	/*
	 * config->mRestartDir: default initialized
	 */
	/*
	 * config->mRuby: default initialized
	 */
	/*
	 * config->mSpawnMethod: default initialized
	 */
	config->mStartTimeout = UNSET_INT_VALUE;
	/*
	 * config->mStartupFile: default initialized
	 */
	config->mStickySessions = Apache2Module::UNSET;
	/*
	 * config->mStickySessionsCookieName: default initialized
	 */
	/*
	 * config->mUser: default initialized
	 */

	config->mAllowEncodedSlashesSourceLine = 0;
	config->mAppEnvSourceLine = 0;
	config->mAppGroupNameSourceLine = 0;
	config->mAppRootSourceLine = 0;
	config->mAppTypeSourceLine = 0;
	config->mBaseURIsSourceLine = 0;
	config->mBufferResponseSourceLine = 0;
	config->mBufferUploadSourceLine = 0;
	config->mEnabledSourceLine = 0;
	config->mErrorOverrideSourceLine = 0;
	config->mForceMaxConcurrentRequestsPerProcessSourceLine = 0;
	config->mFriendlyErrorPagesSourceLine = 0;
	config->mGroupSourceLine = 0;
	config->mHighPerformanceSourceLine = 0;
	config->mLoadShellEnvvarsSourceLine = 0;
	config->mLveMinUidSourceLine = 0;
	config->mMaxPreloaderIdleTimeSourceLine = 0;
	config->mMaxRequestQueueSizeSourceLine = 0;
	config->mMaxRequestsSourceLine = 0;
	config->mMeteorAppSettingsSourceLine = 0;
	config->mMinInstancesSourceLine = 0;
	config->mMonitorLogFileSourceLine = 0;
	config->mNodejsSourceLine = 0;
	config->mPythonSourceLine = 0;
	config->mRestartDirSourceLine = 0;
	config->mRubySourceLine = 0;
	config->mSpawnMethodSourceLine = 0;
	config->mStartTimeoutSourceLine = 0;
	config->mStartupFileSourceLine = 0;
	config->mStickySessionsSourceLine = 0;
	config->mStickySessionsCookieNameSourceLine = 0;
	config->mUserSourceLine = 0;

	config->mAllowEncodedSlashesExplicitlySet = false;
	config->mAppEnvExplicitlySet = false;
	config->mAppGroupNameExplicitlySet = false;
	config->mAppRootExplicitlySet = false;
	config->mAppTypeExplicitlySet = false;
	config->mBaseURIsExplicitlySet = false;
	config->mBufferResponseExplicitlySet = false;
	config->mBufferUploadExplicitlySet = false;
	config->mEnabledExplicitlySet = false;
	config->mErrorOverrideExplicitlySet = false;
	config->mForceMaxConcurrentRequestsPerProcessExplicitlySet = false;
	config->mFriendlyErrorPagesExplicitlySet = false;
	config->mGroupExplicitlySet = false;
	config->mHighPerformanceExplicitlySet = false;
	config->mLoadShellEnvvarsExplicitlySet = false;
	config->mLveMinUidExplicitlySet = false;
	config->mMaxPreloaderIdleTimeExplicitlySet = false;
	config->mMaxRequestQueueSizeExplicitlySet = false;
	config->mMaxRequestsExplicitlySet = false;
	config->mMeteorAppSettingsExplicitlySet = false;
	config->mMinInstancesExplicitlySet = false;
	config->mMonitorLogFileExplicitlySet = false;
	config->mNodejsExplicitlySet = false;
	config->mPythonExplicitlySet = false;
	config->mRestartDirExplicitlySet = false;
	config->mRubyExplicitlySet = false;
	config->mSpawnMethodExplicitlySet = false;
	config->mStartTimeoutExplicitlySet = false;
	config->mStartupFileExplicitlySet = false;
	config->mStickySessionsExplicitlySet = false;
	config->mStickySessionsCookieNameExplicitlySet = false;
	config->mUserExplicitlySet = false;
}


} // namespace Apache2Module
} // namespace Passenger
