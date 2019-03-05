﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API AddUploadBufferRequest : public StorageGatewayRequest
  {
  public:
    AddUploadBufferRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddUploadBuffer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline AddUploadBufferRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline AddUploadBufferRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline AddUploadBufferRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIdsHasBeenSet = true; m_diskIds = value; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIdsHasBeenSet = true; m_diskIds = std::move(value); }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddUploadBufferRequest& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddUploadBufferRequest& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddUploadBufferRequest& AddDiskIds(const Aws::String& value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddUploadBufferRequest& AddDiskIds(Aws::String&& value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string have a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddUploadBufferRequest& AddDiskIds(const char* value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(value); return *this; }

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
