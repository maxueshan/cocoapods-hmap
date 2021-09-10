# frozen_string_literal: true

# The primary namespace for cocoapods-hmap.
module HMap
  require_relative 'cocoapods-hmap/version'
  require_relative 'cocoapods-hmap/view'
  require_relative 'cocoapods-hmap/hmap_struct'
  require_relative 'cocoapods-hmap/utils'
  require_relative 'cocoapods-hmap/helper/pods_helper'
  require_relative 'cocoapods-hmap/exceptions'
  require_relative 'cocoapods-hmap/framework/framework_vfs'
  require_relative 'cocoapods-hmap/hmap_save'
  require_relative 'cocoapods-hmap/helper/xcconfig_helper'
  require_relative 'cocoapods-hmap/pods_specification'
  require_relative 'cocoapods-hmap/helper/build_setting_helper'

  autoload :MapFileReader, 'cocoapods-hmap/hmap_reader'
  autoload :MapFileWriter, 'cocoapods-hmap/hmap_writer'
  autoload :MapFile, 'cocoapods-hmap/mapfile'
  autoload :Executable, 'cocoapods-hmap/executable'
end
