<?hh // strict
namespace Usox\Sharesta;

use namespace HH\Lib\IO;

interface RequestBodyInterface {

  public function useIO(IO\ReadHandle $input): this;

	public function getBody(): dict<string, mixed>;

	public function getAsString(string $key): string;

	public function getAsInt(string $key): int;

	public function getAsBool(string $key): bool;

	public function getAsVec(string $key): vec<mixed>;

	public function getAsDict(string $key): dict<string, mixed>;
}
